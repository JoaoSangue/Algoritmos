#include "binarySearchTree.h"
#include "stdio.h"

int main()
{
    binarySearchTree *tree = createTree();
    insertToTree( tree, 25 );
    insertToTree( tree, 10 );
    insertToTree( tree, 50 );
    insertToTree( tree, 5 );
    insertToTree( tree, 500 );
    insertToTree( tree, 15 );
    insertToTree( tree, 25 );
    insertToTree( tree, 40 );
    insertToTree( tree, 30 );
    insertToTree( tree, 35 );
    insertToTree( tree, 13 );
    insertToTree( tree, 12 );
    insertToTree( tree, 11 );
    insertToTree( tree, 13 );
    showInOrder( tree );
    printf( "Achou 40? %d\n", searchTree(tree, 40) );
    printf( "Achou 400? %d\n", searchTree(tree, 400) );
    removeFromTree( tree, 50 );
    removeFromTree( tree, 13 );
    removeFromTree( tree, 25 );
    showInOrder( tree );

    return 0;
}
