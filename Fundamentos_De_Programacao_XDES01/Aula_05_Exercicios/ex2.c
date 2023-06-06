#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, menor_num;
    
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    menor_num = n1;

    if (n2 < menor_num)
    {
        menor_num = n2;
    }
    if (n3 < menor_num)
    {
        menor_num = n3;
    }
    if (n4 < menor_num)
    {
        menor_num = n4;
    }

    printf("%d", menor_num);

    return 0;
}