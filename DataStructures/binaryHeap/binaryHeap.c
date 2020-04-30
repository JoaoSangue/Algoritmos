#include "binaryHeap.h"
#include "stdlib.h"
#include "math.h"


/*
 *  Creation
 */
Heap* create_heap (int height)
{
    Heap *new_heap = (Heap*) malloc ( sizeof(Heap) );
    
    new_heap->max_size = pow(2,height)-1;
    new_heap->list     = (int*) malloc ( sizeof(int) * new_heap->max_size );
    new_heap->size     = 0;

    return new_heap;
}


/*
 *  Insertion
 */
static void shift_up (int *list, int current_position)
{
    int father_position, aux;
    if ( current_position > 0 ) 
    {
        father_position = current_position/2;
        if ( list[ father_position ] < list[ current_position ] )
        {
            aux = list[ father_position ];
            list[ father_position ] = list[ current_position ];
            list[ current_position ] = aux;
            shift_up ( list, father_position );
        }
    }
}

void insert_on_heap (Heap *heap, int value)
{
    if ( heap->size >= heap->max_size )
    {
        exit ( OVERFLOW );
    }
    heap->list[ heap->size ] = value;
    heap->size++;
    shift_up ( heap->list, heap->size-1 );
}


/*
 *  Removal
 */
static void shift_down (int *list, int current_position, int size)
{
    int children_position, aux;
    
    children_position = current_position*2 + 1;
    if ( children_position < size )
    {
        if ( list[ children_position + 1 ] > list[ children_position ] )
        {
            children_position++;
        }
        if ( list[ children_position ] > list[ current_position ] )
        {
            aux = list[ current_position ];
            list[ current_position ] = list[ children_position ];
            list[ children_position ] = aux;
            shift_down ( list, children_position, size );
        }
    }
}

int remove_from_heap (Heap *heap)
{
    int removed;
    if ( heap->size <= 0 )
    {
        exit ( UNDERFLOW );
    }
    heap->size--;
    removed = heap->list[0];
    heap->list[0] = heap->list[ heap->size ];
    shift_down ( heap->list, 0, heap->size );
    return removed;
}

