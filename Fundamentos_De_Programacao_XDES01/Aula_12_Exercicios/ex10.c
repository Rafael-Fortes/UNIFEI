#include <stdio.h>

#define TAM 5
int maxvet(int *vet, int n);

int main()
{
    int vetor[TAM] = {5, 7, 2, 1, 3};

    printf("%d\n", maxvet(vetor, TAM));

    return 0;
}

int maxvet(int *vet, int n)
{
    int i, maior;
    int *p=NULL;

    for (i=0; i<n; i++)
    {
        p = vet + i;
        
        if (i == 0)
        {
            maior = *p;
        }
        else if (*p > maior)
        {
            maior = *p;
        }
    }

    return maior;
}