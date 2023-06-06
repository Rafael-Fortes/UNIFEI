#include <stdio.h>

int main()
{
    int num, i;
    float soma=0, denominador=1;

    scanf("%d", &num);

    for (i=0; i<num; i++)
    {
        soma += ((i*2) / (denominador));

        denominador *= 2;
    }

    printf("%.2f", soma);

    return 0;
}