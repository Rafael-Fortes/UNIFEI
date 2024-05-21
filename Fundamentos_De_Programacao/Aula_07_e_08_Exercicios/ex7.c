#include <stdio.h>

int main()
{
    int aposta[15];
    int num, i, j, pontos;

    pontos = 0;

    for (i=0; i<15; i++)
    {
        scanf("%d", &aposta[i]);
    }

    for (i=0; i<15; i++)
    {
        scanf("%d", &num);

        for (j=0; j<15; j++)
        {
            if (aposta[j] == num)
            {
                pontos++;
                break;
            }
        }
    }

    printf("%d", pontos);


    return 0;
}