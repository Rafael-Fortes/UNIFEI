#include <stdio.h>

int main()
{
    int num, x;
    int cont=0, i=1;

    scanf("%d %d", &num, &x);

    while (cont<num)
    {
        if (i % x == 0)
        {
            printf("%d ", i);
            cont++;
        }
        i++;
    }

    return 0;
}