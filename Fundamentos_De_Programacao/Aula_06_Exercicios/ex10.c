#include <stdio.h>

int main()
{
    int num, i;
    int soma=0;

    do
    {
        scanf("%d", &num);
    } while (num < 0);

    for (i=1; i<=num; i++)
    {
        if (num % i == 0)
        {
            soma += i;
        }
    }

    printf("%d", soma);
    
    return 0;
}