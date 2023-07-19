#include <stdio.h>

typedef struct Ponto
{
    int x, y;
} Ponto;

int verificarPonto(Ponto p, Ponto v1, Ponto v2);

int main()
{
    struct Ponto p, v1, v2;
    
    scanf("%d %d", &p.x, &p.y);
    scanf("%d %d", &v1.x, &v1.y);
    scanf("%d %d", &v2.x, &v2.y);
    
    int resultado = verificarPonto(p, v1, v2);
    
    if (resultado) 
    {
        printf("%d", resultado);
    } 
    else 
    {
        printf("%d", resultado);
    }
    
    return 0;
}

int verificarPonto(Ponto p, Ponto v1, Ponto v2)
{
    if (p.x > v1.x && p.x < v2.x && p.y > v1.y && p.y < v2.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}