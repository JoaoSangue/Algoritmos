#include "stdio.h"
#include "queue.h"

int main ()
{
    Queue *queue = create_queue();
    enqueue ( queue, 45 );
    enqueue ( queue, 30 );
    enqueue ( queue, 9  );
    enqueue ( queue, 21 );
    enqueue ( queue, 62 );
    enqueue ( queue, 2  );
    enqueue ( queue, 5  );

    for ( int i = 0; i < 7; i++ )
    {
        printf("%d ", dequeue ( queue ));
    }
    printf("\n");

    return 0;
}
