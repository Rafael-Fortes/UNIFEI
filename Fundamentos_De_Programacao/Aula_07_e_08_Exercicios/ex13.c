#include <stdio.h>

int main()
{
    int m, n, i, j;
    int maior1, lin1, col1;
    int maior2, lin2, col2;


    scanf("%d %d", &m, &n);
    int matriz[m][n];

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &matriz[i][j]);

            if (i==0 && j==0)
            {
                maior1 = matriz[i][j];
                lin1 = i;
                col1 = j;

                maior2 = matriz[i][j];
                lin2 = i;
                col2 = j;
            }
            else if (matriz[i][j] > maior1)
            {
                maior2 = maior1;
                lin2 = lin1;
                col2 = col1;

                maior1 = matriz[i][j];
                lin1 = i;
                col1 = j;
            }

            if (matriz[i][j] > maior2 && matriz[i][j] < maior1)
            {
                maior2 = matriz[i][j];
                lin2 = i;
                col2 = j;
            }
        }
    }

    printf("%d %d %d", maior2, lin2, col2);

    return 0;
}