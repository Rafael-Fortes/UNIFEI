#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    double raiz3, raiz4;
    float soma;

    scanf("%d", &num);
    
    raiz3 = pow(num, (1.0/3.0));
    raiz4 = pow(num, (1.0/4.0));
    soma = raiz3 + raiz4;

    printf("%.2f", soma);

    return 0;
}