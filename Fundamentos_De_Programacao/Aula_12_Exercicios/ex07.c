#include <stdio.h>

int soma_algarismos(int num);

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", soma_algarismos(num));

    return 0;
}

int soma_algarismos(int num)
{
    int soma=0;

    while (num >= 1)
    {
        soma += num % 10;
        num = num / 10;
    }    

    return soma;
}