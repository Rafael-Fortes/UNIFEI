#include <stdio.h>

int main()
{
    int num, cont, i;

    cont = 0;
    i = 1;

    scanf("%d", &num);

    while (cont < num)
    {
        printf("%d ", i);
        i += 2;
        cont += 1;
    }

    return 0;
}