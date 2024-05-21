#include <stdio.h>

int main()
{
    int m, n, i, j;
    int maior, lin, col;


    scanf("%d %d", &m, &n);
    int matriz[m][n];

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &matriz[i][j]);

            if (i==0 && j==0)
            {
                maior = matriz[i][j];
                lin = i;
                col = j;
            }
            else if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                lin = i;
                col = j;
            }
        }
    }

    printf("%d %d %d", maior, lin, col);

    return 0;
}