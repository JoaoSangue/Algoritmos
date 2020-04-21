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

void insertToTree (binarySearchTree *tree, int value);
void insertNode (node **root, int value);

void showInOrder (binarySearchTree *tree);
void inOrder (node *root);

int removeFromTree (binarySearchTree *tree, int value);
int removeNode (node **root, int value);

int searchTree(binarySearchTree *tree, int value);
int findNode(node *root, int value);

#endif
