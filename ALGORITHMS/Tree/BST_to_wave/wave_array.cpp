#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{

    int data;
    TreeNode *right;
    TreeNode *left;

    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

/*
    Utility function to insert nodes in binary tree
*/
TreeNode *insertNode(int data, TreeNode *root)
{
    if (root == NULL)
    {
        TreeNode *node = new TreeNode(data);
        return node;
    }
    else if (data > root->data)
    {
        root->right = insertNode(data, root->right);
    }
    else if (data <= root->data)
    {
        root->left = insertNode(data, root->left);
    }
    return root;
}

/*
    Function to create array to wave array in O(n) time and O(h) space
*/
vector<int> toWaveArray(TreeNode *root)
{

    vector<int> ans;
    stack<TreeNode *> s1; //inorder
    stack<TreeNode *> s2; // revInorder

    TreeNode *root1 = root, *root2 = root;
    TreeNode *curr1 = NULL, *curr2 = NULL;

    while (1)
    {
        // code for iterative inorder traversal
        while (root1)
        {
            s1.push(root1);
            root1 = root1->left;
        }
        curr1 = s1.top();
        s1.pop();
        root1 = curr1->right;

        //code for iterative reverse inorder traversal
        while (root2)
        {
            s2.push(root2);
            root2 = root2->right;
        }
        curr2 = s2.top();
        s2.pop();
        root2 = curr2->left;

        // breaking condition
        if (curr1->data >= curr2->data)
        {
            break;
        }

        //pushing elements to answer array
        ans.push_back(curr1->data);
        ans.push_back(curr2->data);
    }

    return ans;
}

//driver program
int main()
{
    TreeNode *root = NULL;
    int tree[] = {3, 1, 7, 0, 2, 5, 10, 4, 6, 9, 8, -1};
    for (int i = 0; i < 12; i++)
    {
        root = insertNode(tree[i], root);
    }

    vector<int> ans = toWaveArray(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
