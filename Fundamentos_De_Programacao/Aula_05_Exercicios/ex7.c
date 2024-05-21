#include <stdio.h>

int main()
{
    float preco;
    int estado;

    scanf("%f %d", &preco, &estado);
    
    if (estado == 1)
    {
        printf("%.2f", (preco * 1.12));
    }
    else if (estado == 2)
    {
        printf("%.2f", (preco * 1.07));
    }
    else if (estado == 3)
    {
        printf("%.2f", (preco * 1.15));
    }
    else if (estado == 4)
    {
        printf("%.2f", (preco * 1.08));
    }

    return 0;
}