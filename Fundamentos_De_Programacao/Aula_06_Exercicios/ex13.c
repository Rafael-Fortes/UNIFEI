#include <stdio.h>

int main()
{
    int num, i;
    float soma=0;
    int inverte=-1;

    scanf("%d", &num);

    for (i=1; i<=num; i++)
    {
        soma += (inverte * (1.0/i));
        inverte *= -1;
    }

    printf("%.2f", soma);

    return 0;
}