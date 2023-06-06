#include <stdio.h>

int main()
{
    float num=0, soma=0;
    int cont=0;

    while (num >= 0)
    {
        cont += 1;
        soma += num;
        scanf("%f", &num);
    }

    printf("%.1f", (soma / (cont-1)));

    return 0;
}