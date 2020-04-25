#ifndef STACK
#define STACK

typedef struct stack_item
{
    int value;
    struct stack_item *next;
} Stack_item;

typedef struct stack
{
    Stack_item *top;
} Stack;

Stack *create_stack();

void push_to_stack (Stack *stack, int value);

int pop_from_stack (Stack *stack);


#endif
