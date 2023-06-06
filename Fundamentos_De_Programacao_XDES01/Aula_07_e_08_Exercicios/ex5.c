#include <stdio.h>

int main()
{
    int num, i;
    int maior, menor, pos_x, pos_y;

    for (i=0; i<10; i++)
    {
        scanf("%d", &num);

        if (i == 0)
        {
            maior = num;
            menor = num;
            pos_x = i;
            pos_y = i;
        }
        else if (num > maior)
        {
            maior = num;
            pos_x = i;
        }
        else if (num < menor)
        {
            menor = num;
            pos_y = i;
        }
    }

    printf("%d %d\n", maior, menor);
    printf("%d %d\n", pos_x, pos_y);

    return 0;
}