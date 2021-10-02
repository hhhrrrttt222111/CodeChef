#include<stdio.h>
#include<stdlib.h>

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node
{
int data;
struct node* left;
struct node* right;
};

/* Prototypes for functions needed in printPaths() */
void printPathsRecur(struct node* node, int path[], int pathLen);
void printArray(int ints[], int len);

/*Given a binary tree, print out all of its root-to-leaf
paths, one per line. Uses a recursive helper to do the work.*/
void printPaths(struct node* node)
{
int path[1000];
printPathsRecur(node, path, 0);
}

/* Recursive helper function -- given a node, and an array containing
the path from the root node up to but not including this node,
print out all the root-leaf paths.*/
void printPathsRecur(struct node* node, int path[], int pathLen)
{
if (node==NULL)
	return;

/* append this node to the path array */
path[pathLen] = node->data;
pathLen++;

/* it's a leaf, so print the path that led to here */
if (node->left==NULL && node->right==NULL)
{
	printArray(path, pathLen);
}
else
{
	/* otherwise try both subtrees */
	printPathsRecur(node->left, path, pathLen);
	printPathsRecur(node->right, path, pathLen);
}
}


/* UTILITY FUNCTIONS */
/* Utility that prints out an array on a line. */
void printArray(int ints[], int len)
{
int i;
for (i=0; i<len; i++)
{
	printf("%d ", ints[i]);
}
printf("\n");
}

/* utility that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newnode(int data)
{
struct node* node = (struct node*)
					malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;

return(node);
}

/* Driver program to test above functions*/
int main()
{

/* Constructed binary tree is
			10
		/ \
		8	 2
	/ \ /
	3	 5 2
*/
struct node *root = newnode(10);
root->left	 = newnode(8);
root->right	 = newnode(2);
root->left->left = newnode(3);
root->left->right = newnode(5);
root->right->left = newnode(2);

printPaths(root);

getchar();
return 0;
}
