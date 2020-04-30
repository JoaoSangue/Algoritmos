#include "stdio.h"
#include "binaryHeap.h"

int main ()
{
    Heap *heap = create_heap (4);

    insert_on_heap ( heap, 60 );
    insert_on_heap ( heap, 28 );
    insert_on_heap ( heap, 70 );
    insert_on_heap ( heap, 95 );
    insert_on_heap ( heap, 39 );
    insert_on_heap ( heap, 78 );
    insert_on_heap ( heap, 66 );
    insert_on_heap ( heap, 33 );
    insert_on_heap ( heap, 75 );
    insert_on_heap ( heap, 98 );
    
    printf ( "Next element: %d\n", remove_from_heap (heap) );
    printf ( "Next element: %d\n", remove_from_heap (heap) );
    printf ( "Next element: %d\n", remove_from_heap (heap) );

    return 0;
}
