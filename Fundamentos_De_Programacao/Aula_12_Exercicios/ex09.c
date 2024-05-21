#include <stdio.h>

int somafat(int n);

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d\n", somafat(num));

    return 0;
}

int somafat(int n)
{
    long long int fatorial=1;
    int i=0, soma=0;

    for (i=1; i<=n; i++)
    {
        fatorial *= i;
    }

    while (fatorial >= 1)
    {
        soma += fatorial % 10;
        fatorial /= 10;
    }

    return soma;
}
