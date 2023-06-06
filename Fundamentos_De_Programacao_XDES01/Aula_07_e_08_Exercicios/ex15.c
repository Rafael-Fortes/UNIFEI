#include <stdio.h>

int main()
{
    int n;
    int i, j;
    int soma=0, pos=0, controle=0;

    // inciando a matriz e lendo seus valores
    scanf("%d", &n);
    int matriz[n][n];
    int vetor[(n*2)+2];
    
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // soma das linhas
    for (i=0; i<n; i++)
    {
        soma=0;

        for (j=0; j<n; j++)
        {
            soma += matriz[i][j];
        }

        vetor[pos] = soma;
        pos++;
    }

    // soma das colunas
    for (i=0; i<n; i++)
    {
        soma=0;
        
        for (j=0; j<n; j++)
        {
            soma += matriz[j][i];
        }

        vetor[pos] = soma;
        pos++;
    }

    // soma da diagonal primária
    soma = 0;
    for (i=0; i<n; i++)
    {
        soma += matriz[i][i];
    }
    vetor[pos] = soma;
    pos++;

    // soma da diagonal secundária
    soma = 0;
    for (i=0; i<n; i++)
    {
        soma += matriz[i][n-i-1];
    }
    vetor[pos] = soma;
    pos++;

    for (i=0; i<pos; i++)
    {
        if (soma==vetor[i])
        {
            controle++;
        }
    }

    if (controle == pos)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}