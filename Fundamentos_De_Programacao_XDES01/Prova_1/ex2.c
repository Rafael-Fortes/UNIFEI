#include <stdio.h>

int main()
{
    int n, i;
    int inverte=1, divisor=1;
    double soma=0;

    do
    {
        scanf("%d", &n);
    } while (n < 0);

    for (i=0; i<n; i++)
    {
        soma += inverte * (1.0/(divisor*divisor));
        divisor += 2;
        inverte *= -1;
    }

    printf("%.4lf", soma);

    return 0;
}