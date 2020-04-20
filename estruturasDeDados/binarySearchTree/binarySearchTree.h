#ifndef BST
#define BST

typedef struct node
{
    int value;
    struct node *left, *right;
} node;

typedef struct 
{
    node *root;
} binarySearchTree;

binarySearchTree* createTree ();
void insertNode (node **root, int value);
void insertToTree (binarySearchTree *tree, int value);
void inOrder (node *root);
void showInOrder (binarySearchTree *tree);
int searchTree(binarySearchTree *tree, int value);
int findNode(node *root, int value);

#endif
