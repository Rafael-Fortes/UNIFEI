#include <stdio.h>

int main()
{
    int per_desconto;
    float preco, preco_final, desconto;

    scanf("%f %d", &preco, &per_desconto);

    desconto = preco * (per_desconto / 100.0);
    preco_final = preco - desconto;

    printf("%.2f %.2f", preco_final, desconto);

    return 0;
}