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
} binary_search_tree;

binary_search_tree* create_tree ();

void insert_to_tree (binary_search_tree *tree, int value);
void show_in_order (binary_search_tree *tree);

int remove_from_tree (binary_search_tree *tree, int value);
int search_tree (binary_search_tree *tree, int value);

#endif
