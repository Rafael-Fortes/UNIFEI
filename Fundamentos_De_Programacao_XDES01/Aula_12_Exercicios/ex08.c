#include <stdio.h>

int qtdprimos(int n);

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d\n", qtdprimos(num));

    return 0;
}

int qtdprimos(int n)
{
    int i, j;
    int controle=0, qtd=0;

    for (i=1; i<=n; i++)
    {
        if (i >= 2)
        {
            controle = 1;

            for (j=2; j<=i/2; j++)
            {
                if (i % j == 0)
                {
                    controle = 0;
                    break;
                }
            }
        }

        if (controle == 1)
        {
            qtd++;
        }
    }

    return qtd;
}