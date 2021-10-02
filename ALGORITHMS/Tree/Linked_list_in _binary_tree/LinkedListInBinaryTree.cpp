#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

struct TreeNode
{
    TreeNode *left;
    TreeNode *right;
    int val;

    TreeNode(int x) : left(NULL), right(NULL), val(x) {}
};

/*
    utility function to make Linked list
*/
ListNode *makeList(int arr[], int n)
{
    ListNode *h = NULL;
    ListNode *root;
    for (int i = 0; i < n; i++)
    {
        int data = arr[i];
        ListNode *node = new ListNode(data);

        if (h == NULL)
        {
            h = node;
            root = h;
        }
        else
        {
            root->next = node;
            root = node;
        }
    }
    return h;
}

/*
    utility function to build tree from its level order traversal
*/
TreeNode *build_tree(int nodes[], int n)
{
    TreeNode *root = new TreeNode(nodes[0]);
    queue<TreeNode *> q;
    bool is_left = true;
    TreeNode *cur = NULL;
    q.push(root);

    for (int i = 1; i < n; i++)
    {
        TreeNode *node = NULL;
        if (nodes[i] != '#')
        {
            node = new TreeNode(nodes[i]);
            q.push(node);
        }

        if (is_left)
        {
            cur = q.front();
            q.pop();
            cur->left = node;
            is_left = false;
        }
        else
        {
            cur->right = node;
            is_left = true;
        }
    }

    return root;
}

/*  
    function to find path of linked list in binary tree
    this function will traverse tree in pre order fashion
*/

bool findPath(TreeNode *root, ListNode *head, vector<char> &path)
{
    //base case
    if (root == NULL)
    {
        return false;
    }

    //if current tree node not equal to current linked list node we return False
    if (root->val != head->data)
        return false;

    //condition when linked list found in tree
    if (root->left == NULL and root->right == NULL and head->next == NULL)
    {
        return true;
    }

    //First we go to left
    path.push_back('L');
    if (findPath(root->left, head->next, path))
        return true;
    //popping L because we did not get right path by going towards left
    path.pop_back();

    //Then we go to right we we did not find path of linked list in left
    path.push_back('R');
    if (findPath(root->right, head->next, path))
        return true;

    //popping L because we did not get right path by going towards left
    path.pop_back();

    return false;
}

/*
    Driver function
*/
int main()
{
    int tree[] = {1, 2, 3, 4, 5, 6, 8, -1, -1, 8};
    TreeNode *root = build_tree(tree, 10);

    int ll[] = {1, 2, 5, 8};
    ListNode *head = makeList(ll, 4);

    vector<char> path;
    vector<int> v;

    findPath(root, head, path);
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
}

/* code is conttributed by vibhor agarwal */
