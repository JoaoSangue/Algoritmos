#include "binarySearchTree.h"
#include "stdio.h"

int main()
{
    binary_search_tree *tree = create_tree();
    insert_to_tree( tree, 25 );
    insert_to_tree( tree, 10 );
    insert_to_tree( tree, 50 );
    insert_to_tree( tree, 5 );
    insert_to_tree( tree, 500 );
    insert_to_tree( tree, 15 );
    insert_to_tree( tree, 25 );
    insert_to_tree( tree, 40 );
    insert_to_tree( tree, 30 );
    insert_to_tree( tree, 35 );
    insert_to_tree( tree, 13 );
    insert_to_tree( tree, 12 );
    insert_to_tree( tree, 11 );
    insert_to_tree( tree, 13 );
    show_in_order( tree );
    printf( "Achou 40? %d\n", search_tree(tree, 40) );
    printf( "Achou 400? %d\n", search_tree(tree, 400) );
    remove_from_tree( tree, 50 );
    remove_from_tree( tree, 13 );
    remove_from_tree( tree, 25 );
    show_in_order( tree );

    return 0;
}
