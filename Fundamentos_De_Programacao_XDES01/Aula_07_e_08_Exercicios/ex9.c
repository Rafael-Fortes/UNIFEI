#include <stdio.h>

int main()
{
    int vet[8]={0};
    int num, i, j, divisivel, cont;

    cont = 0;

    for (i=0; i<8; i++)
    {
        scanf("%d", &num);
        divisivel = 0;

        for (j=1; j<=num; j++)
        {
            if(num % j == 0)
            {
                divisivel++;
            }

            if (divisivel > 2)
            {
                break;
            }
        }

        if (divisivel == 2)
        {
            vet[cont] = num;
            cont++;
        }
    }

    for (i=0; i<cont; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}