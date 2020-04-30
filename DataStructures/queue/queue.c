#include "queue.h"
#include "stdlib.h"

Queue *create_queue()
{
    Queue *new_queue = (Queue*) malloc ( sizeof(Queue) );
    new_queue->first = NULL;
    return new_queue;
}

void enqueue (Queue *queue, int value)
{
    Queue_item *new_item, **lookup;

    lookup = &queue->first;
    while ( (*lookup) )
    {
        lookup = &(*lookup)->next;
    }

    new_item = (Queue_item*) malloc ( sizeof(Queue_item) );
    new_item->value = value;
    new_item->next = NULL;

    *lookup = new_item;
}

int dequeue (Queue *queue)
{
    int removed_item;
    Queue_item *lookup;

    lookup = queue->first;
    removed_item = lookup->value;
    queue->first = lookup->next;

    free ( lookup );

    return removed_item;
}
