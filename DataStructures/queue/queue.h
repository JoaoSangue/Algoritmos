#ifndef QUEUE
#define QUEUE

typedef struct queue_item
{
    int value;
    struct queue_item *next;
} Queue_item;

typedef struct queue
{
    Queue_item *first;
} Queue;

Queue *create_queue();

void enqueue (Queue *queue, int value);

int dequeue (Queue *queue);


#endif
