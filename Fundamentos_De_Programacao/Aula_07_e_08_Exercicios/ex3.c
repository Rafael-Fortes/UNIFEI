#include <stdio.h>

int main()
{
    int vetor[8];
    int i, x, y;

    for (i=0; i<8; i++)
    {
        scanf("%d", &vetor[i]);
    }

    do
    {
        scanf("%d %d", &x, &y);
    } while ((x < 0 || x > 7) || (y < 0 || y > 7));

    printf("%d", vetor[x] + vetor[y]);

    return 0;
}