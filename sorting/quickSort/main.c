#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "quicksort.h"

#define TAMANHO 30

int main()
{
    int vetor[TAMANHO], i;

    srand(time(NULL));

    for ( i = 0; i < TAMANHO; i++)
    {
        vetor[i] = rand()%100 + 1;
    }
    for ( i = 0; i < TAMANHO; i++) printf("%d ", vetor[i]);
    printf("\n");

    quick_sort(vetor, 0, TAMANHO-1);

    for ( i = 0; i < TAMANHO; i++) printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}
