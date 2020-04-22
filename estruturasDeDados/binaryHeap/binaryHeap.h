#ifndef BINARYHEAP
#define BINARYHEAP

enum ERROR { UNDERFLOW = 2, OVERFLOW = 3 };

typedef struct
{
    int *list;
    int max_size;
    int size;
} Heap;

Heap* create_heap (int height);

void insert_on_heap (Heap *heap, int value);

int remove_from_heap (Heap *heap);

#endif
