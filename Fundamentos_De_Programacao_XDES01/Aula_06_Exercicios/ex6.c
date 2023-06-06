#include <stdio.h>

int main()
{
    int n1, n2, i;
    int produto=1, soma=0;

    scanf("%d %d", &n1, &n2);

    for (i=n1; i<=n2; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
        else
        {
            produto *= i;
        }
    }

    printf("%d %d", soma, produto);

    return 0;
}