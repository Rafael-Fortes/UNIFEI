#include <stdio.h>

int main()
{
    int num, i;
    int inverte=1, soma=0;

    scanf("%d", &num);

    for (i=1; i<=num; i++)
    {
        soma += (i*inverte);
        inverte *= -1;
    }

    printf("%d", soma);

    return 0;
}