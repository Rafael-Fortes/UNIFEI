#include <stdio.h>

int main()
{
    int num, i;
    long double soma=0, numerador=1;
    int inverte=1, controle=2;

    scanf("%d", &num);

    for (i=1; i<=num; i++)
    {
        if (controle > 0)
        {
            controle -= 1;
        }
        else if (controle == 0)
        {
            inverte *= -1;
            controle = 1;
        }

        soma += inverte * (numerador/i * 1.0);
        numerador += 2;
    }

    printf("%.2Lf", soma);


    return 0;
}