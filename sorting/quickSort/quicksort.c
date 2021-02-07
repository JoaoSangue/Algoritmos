#include "quicksort.h"

int partition (int *vetor, int inicio, int fim)
{
    int pivo, aux, i;

    pivo = inicio-1;

    for (i = inicio; i < fim; i++)
	{
        if ( vetor[i] <= vetor[fim] )
        {
            pivo++;
            aux = vetor[i];
            vetor[i] = vetor[pivo];
            vetor[pivo] = aux;
        }
    }
    pivo++;

    aux = vetor[fim];
    vetor[fim]  = vetor[pivo];
    vetor[pivo] = aux;

    return pivo;
}

void quick_sort (int *vetor, int inicio, int fim)
{
    int pivo;

    if ( inicio < fim )
	{
        pivo = partition(vetor, inicio, fim);
        quick_sort(vetor, inicio, pivo-1);
        quick_sort(vetor, pivo+1, fim);
    }
}
