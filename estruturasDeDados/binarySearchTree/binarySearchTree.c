#include "binarySearchTree.h"
#include "stdlib.h"
#include "stdio.h"


/*
 * Creates Tree
 */
binary_search_tree* create_tree ()
{
    binary_search_tree *newTree = (binary_search_tree*) malloc( sizeof(binary_search_tree) );
    newTree->root = NULL;
    return newTree;
}


/*
 * Inserting in Tree
 */
static void insert_node (node **root, int value)
{
    if ( !(*root) )
    {
        node *newNode    = (node*) malloc( sizeof(node) );
        (*newNode).value = value;
        (*newNode).left  = NULL;
        (*newNode).right = NULL;
        *root            = newNode;
        return;
    }

    if ( (*root)->value > value )
    {
        insert_node( &(*root)->left, value );
    }
    else
    {
        insert_node( &(*root)->right, value );
    }
}

void insert_to_tree (binary_search_tree *tree, int value)
{
    insert_node ( &tree->root, value );
}


/*
 * Removing from Tree
 */
static int remove_node (node **root, int value)
{
    if ( !(*root) ) return 0;

    if ( (*root)->value == value )
    {
        node **lookup;
        node *aux;
        if( (*root)->right )
        {
            lookup = &(*root)->right;
            while ( (*lookup)->left != NULL )
            {
                lookup = &(*lookup)->left;
            }
            aux             = (*lookup);
            (*lookup)       = (*lookup)->right;
            (*root)->value  = aux->value;
        } 
        else
        {
            lookup  = &(*root)->left;
            aux     = (*root);
            root    = lookup;
        }
        free(aux);
        return 1;
    }

    if ( (*root)->value > value )
    {
        return remove_node ( &(*root)->left, value );
    }
    else
    {
        return remove_node ( &(*root)->right, value );
    }
}

int remove_from_tree (binary_search_tree *tree, int value)
{
    return remove_node ( &tree->root, value );
}


/*
 * Searching for a Node
 */
static int find_node (node *root, int value)
{
    if( !root ) return 0;

    if ( root->value == value )
    {
        return 1;
    }
    else if ( root->value > value )
    {
        return find_node ( root->left, value );
    }
    else
    {
        return find_node ( root->right, value );
    }
}

int search_tree (binary_search_tree *tree, int value)
{
    return find_node ( tree->root, value );
}


/*
 * Printing Tree
 */
static void in_order (node *root)
{
    if ( root->left ) 
    {
        in_order ( root->left );
    }
    printf ( "%d ", root->value );
    if ( root->right ) 
    {
        in_order ( root->right );
    }
}

void show_in_order (binary_search_tree *tree)
{
    in_order ( tree->root );
    printf ( "\n" );
}
