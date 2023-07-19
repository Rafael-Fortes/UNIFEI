#include <stdio.h>

typedef struct pessoa
{
    char nome[100];
    int idade;
    char endereco[100];
    int numero;
} pessoa;

int main()
{
    pessoa p1;
    
    scanf(" %[^\n]", p1.nome);
    scanf("%d", &p1.idade);
    scanf(" %[^\n]", p1.endereco);
    scanf("%d", &p1.numero);
    
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Endereco: %s, %d\n", p1.endereco, p1.numero);
    
    return 0;
}