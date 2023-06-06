#include <stdio.h>

int main()
{
    int num, i;

    do
    {
        scanf("%d", &num);
    } while (num < 0);

    for (i=0; i<=num; i++)
    {
        printf("%d ", i);
    }

    return 0;
}