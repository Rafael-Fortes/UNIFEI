#include <stdio.h>

int main()
{
    int num;
    int soma=0, cont=0, i=1;

    do
    {
        scanf("%d", &num);
    } while (num < 0);

    while (cont<num)
    {
        soma += i;
        i += 2;
        cont += 1;
    }

    printf("%d", soma);

    return 0;
}