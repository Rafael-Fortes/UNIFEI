#include <stdio.h>

int main()
{
    int n, x, i;
    int soma=0;

    do
    {
        scanf("%d %d", &n, &x);
    } while ((n < 0) || (x < 0));

    for (i=1; i<=n; i++)
    {
        if (i % x == 0)
        {
            soma += i;
        }
    }

    printf("%d", soma);

    return 0;
}