#include "stdio.h"
#include "stack.h"

int main ()
{
    Stack *stack = create_stack();
    push_to_stack ( stack, 45 );
    push_to_stack ( stack, 30 );
    push_to_stack ( stack, 9  );
    push_to_stack ( stack, 21 );
    push_to_stack ( stack, 62 );
    push_to_stack ( stack, 2  );
    push_to_stack ( stack, 5  );

    for ( int i = 0; i < 7; i++ )
    {
        printf("%d ", pop_from_stack ( stack ));
    }
    printf("\n");

    return 0;
}
