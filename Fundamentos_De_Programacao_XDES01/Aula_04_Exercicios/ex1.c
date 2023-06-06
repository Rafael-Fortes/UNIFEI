#include <stdio.h>

int main()
{
    float real, cotacao, resposta;
    
    scanf("%f %f", &real, &cotacao);
    resposta = real / cotacao;
    printf("%.2f", resposta);
}