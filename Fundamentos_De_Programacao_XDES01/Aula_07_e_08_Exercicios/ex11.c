#include <stdio.h>

int main()
{
    int matriz[4][4];
    int par=0, impar=0;
    int i, j;

    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] % 2 == 0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
    }

    printf("%d %d", par, impar);

    return 0;
}