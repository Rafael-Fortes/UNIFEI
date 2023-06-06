#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    long int quad_soma=0, soma_quad=0;

    scanf("%d", &num);

    for (i=1; i<=num; i++)
    {
        quad_soma += i;
        soma_quad += pow(i, 2);
    }

    quad_soma = pow(quad_soma, 2);

    printf("%ld", (quad_soma - soma_quad));

    return 0;
}