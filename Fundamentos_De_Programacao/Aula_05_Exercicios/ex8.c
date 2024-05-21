#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if (num % 11 == 0)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}