#include <stdio.h>

typedef struct carro
{
    char marca[20];
    float preco;
    int ano;
} carro;

int main()
{
    carro carros[8];
    int i;
    float valor=0;
    
    for (i=0; i<8; i++)
    {
        scanf(" %[^\n]", carros[i].marca);
        scanf(" %f", &carros[i].preco);
        scanf(" %d", &carros[i].ano);
    }
    
    do
    {
        scanf("%f", &valor);
        
        if (valor > 0)
        printf("Carros mais baratos que %.2f:\n", valor);
        {
            for (i=0; i<8; i++)
            {
                if (carros[i].preco < valor)
                {
                    printf("%s %.2f %d\n", carros[i].marca,carros[i].preco, carros[i].ano);
                }
            }
            printf("\n");
        }
    } while (valor > 0);
    
    
    return 0;
}