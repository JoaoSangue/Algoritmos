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
    showInOrder( tree );
    printf( "Achou 40? %d\n", searchTree(tree, 40) );
    printf( "Achou 400? %d\n", searchTree(tree, 400) );

    return 0;
}
