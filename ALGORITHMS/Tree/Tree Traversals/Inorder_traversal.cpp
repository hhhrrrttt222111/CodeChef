#include <bits/stdc++.h>
using namespace std;

// Defining the structure for nodes of the tree
struct BinaryTreeNode
{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void InorderTraversal(struct BinaryTreeNode *root)
{
    if (root == NULL)
        return;
    InorderTraversal(root->left);
    cout << root->data << " ";
    InorderTraversal(root->right);
}

int main()
{

    struct BinaryTreeNode *root = new BinaryTreeNode(10);
    root->left = new BinaryTreeNode(20);
    root->right = new BinaryTreeNode(30);
    root->left->left = new BinaryTreeNode(40);
    root->left->right = new BinaryTreeNode(50);
    root->right->left = new BinaryTreeNode(60);
    root->right->right = new BinaryTreeNode(70);

    /*
-----------The formed tree will look like------
                      
                      10
                    /    \
                   20     30
                  /  \    /  \
                40   50  60   70
*/

    cout << "Inorder Traversal of the tree : ";
    InorderTraversal(root);

    return 0;
}
