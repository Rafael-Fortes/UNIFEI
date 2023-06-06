#include <stdio.h>

int main()
{
    int vetor[10];
    int i, x;

    for (i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &x);

    for (i=0; i<10; i++)
    {
        if (vetor[i] % x == 0)
        {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}