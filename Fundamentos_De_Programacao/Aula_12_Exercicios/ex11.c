#include <stdio.h>

#define TAM 6

double avgget( int *vet, int n);

int main()
{
    int vetor[TAM] = {2, 4, 6, 1, 3, 5};

    printf("%lf\n", avgget(vetor, TAM));

    return 0;
}

double avgget( int *vet, int n)
{
    int *p=vet, i;
    int soma=0;
    double media;

    for (i=0; i<n; i++)
    {
        p = vet + i;

        soma += *p;
    }

    media = soma / (n * 1.0);

    return media;
}