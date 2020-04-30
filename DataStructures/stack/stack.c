#include "stack.h"
#include "stdlib.h"

Stack *create_stack()
{
    Stack *new_stack = (Stack*) malloc ( sizeof(Stack) );
    new_stack->top = NULL;
    return new_stack;
}

void push_to_stack (Stack *stack, int value)
{
    Stack_item *new_item, **lookup;

    lookup = &stack->top;

    new_item = (Stack_item*) malloc ( sizeof(Stack_item) );
    new_item->value = value;
    new_item->next = (*lookup);

    *lookup = new_item;
}

int pop_from_stack (Stack *stack)
{
    int removed_item;
    Stack_item *lookup;

    lookup = stack->top;
    removed_item = lookup->value;
    stack->top = lookup->next;

    free ( lookup );

    return removed_item;
}
