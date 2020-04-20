#include "selectionsort.h"

void selection_sort(int *vetor, int tamanho)
{
    int i, j, min, aux;

    for ( i = 0; i < tamanho; i++ )
    {
        min = i;
        for ( j = i+1; j < tamanho; j++ )
        {
            if ( vetor[j] < vetor[min] )
            {
                min = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = aux;
    }
}
