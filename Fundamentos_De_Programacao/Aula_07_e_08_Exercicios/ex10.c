#include <stdio.h>

int main()
{
    int matriz[4][4];
    int cont=0;
    int i, j;

    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 10)
            {
                cont++;
            }
        }
    }

    printf("%d", cont);

    return 0;
}