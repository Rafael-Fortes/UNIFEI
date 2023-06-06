#include <stdio.h>

int main()
{
    int m1, n1, m2, n2;
    int i, j;

    scanf("%d %d", &m1, &n1);
    int matriz_1[m1][n1];

    for (i=0; i<m1; i++)
    {
        for (j=0; j<n1; j++)
        {
            scanf("%d", &matriz_1[i][j]);
        }
    }

    scanf("%d %d", &m2, &n2);
    int matriz_2[m2][n2];

    for (i=0; i<m2; i++)
    {
        for (j=0; j<n2; j++)
        {
            scanf("%d", &matriz_2[i][j]);
        }
    }

    if (m1 != m2 || n1 != n2)
    {
        printf("impossivel");
    }
    else
    {
        for (i=0; i<m1; i++)
        {
            for (j=0; j<n1; j++)
            {
                printf("%d ", (matriz_1[i][j] + matriz_2[i][j]));
            }
            printf("\n");
        }
    }


    return 0;
}