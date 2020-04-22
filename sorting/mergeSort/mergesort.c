#include "mergesort.h"
#include "stdlib.h"

static void merge(int *vetor, int inicio, int meio, int fim)
{
    int i, j, k, tamanho, *aux;
    i = inicio;
    j = meio+1;
    tamanho = fim+1 - inicio;

    aux = (int*) malloc( tamanho * sizeof(int) );
    
    for ( k = 0; j <= fim && i <= meio; k++)
    {
        if ( vetor[i] > vetor[j])
        {
            aux[k] = vetor[j];
            j++;
        }
        else
        {
            aux[k] = vetor[i];
            i++;
        }
    }

    while ( i <= meio )
    {
        aux[k] = vetor[i];
        i++;
        k++;
    }

    while ( j <= fim )
    {
        aux[k] = vetor[j];
        j++;
        k++;
    }

    i = inicio;
    for ( k = 0; k < tamanho; k++)
    {
        vetor[i] = aux[k];
        i++;
    }
}

void merge_sort(int *vetor, int inicio, int fim)
{
    if ( inicio == fim ) return;
    int meio = ((fim-inicio)/2 + inicio);
    merge_sort(vetor, inicio, meio);
    merge_sort(vetor, meio+1, fim);
    merge(vetor, inicio, meio, fim);
}
