#include "binarySearchTree.h"
#include "stdlib.h"
#include "stdio.h"


/*
 * Creates Tree
 */
binarySearchTree* createTree ()
{
    binarySearchTree *newTree = (binarySearchTree*) malloc( sizeof(binarySearchTree) );
    newTree->root = NULL;
    return newTree;
}


/*
 * Inserting in Tree
 */
void insertToTree (binarySearchTree *tree, int value)
{
    insertNode ( &(*tree).root, value );
}

void insertNode (node **root, int value)
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
        insertNode( &(*root)->left, value );
    }
    else
    {
        insertNode( &(*root)->right, value );
    }
}


/*
 * Removing from Tree
 */
int removeFromTree (binarySearchTree *tree, int value)
{
    return removeNode ( &(*tree).root, value );
}

int removeNode (node **root, int value)
{
    if ( !(*root) ) return 0;

    if ( (*root)->value == value )
    {
        node **lookUp;
        node *aux;
        if( (*root)->right )
        {
            lookUp = &(*root)->right;
            while ( (*lookUp)->left != NULL )
            {
                lookUp = &(*lookUp)->left;
            }
            aux             = (*lookUp);
            (*lookUp)       = (*lookUp)->right;
            (*root)->value  = aux->value;
        } 
        else
        {
            lookUp  = &(*root)->left;
            aux     = (*root);
            root    = lookUp;
        }
        free(aux);
        return 1;
    }

    if ( (*root)->value > value )
    {
        return removeNode ( &(*root)->left, value );
    }
    else
    {
        return removeNode ( &(*root)->right, value );
    }
}


/*
 * Searching for a Node
 */
int searchTree (binarySearchTree *tree, int value)
{
    return findNode((*tree).root, value);
}

int findNode (node *root, int value)
{
    if( !root ) return 0;

    if ( (*root).value == value )
    {
        return 1;
    }
    else if ( (*root).value > value )
    {
        return findNode ( (*root).left, value );
    }
    else
    {
        return findNode ( (*root).right, value );
    }
}

/*
 * Printing Tree
 */
void showInOrder (binarySearchTree *tree)
{
    inOrder( (*tree).root );
    printf( "\n" );
}

void inOrder (node *root)
{
    if ( (*root).left ) 
    {
        inOrder ( (*root).left );
    }
    printf ( "%d ", (*root).value );
    if ( (*root).right ) 
    {
        inOrder ( (*root).right );
    }
}


