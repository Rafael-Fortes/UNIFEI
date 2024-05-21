#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char strNum[100];
    double vetor[4];
    double soma=0;
    int i=0;


    scanf(" %[^\n]", strNum);
    sscanf(strNum, "%lf %lf %lf %lf", &vetor[0], &vetor[1], &vetor[2], &vetor[3]);

    for (i=0; i<4; i++)
    {
        soma += vetor[i];
    }

    printf("%lf", soma);

    return 0;
}