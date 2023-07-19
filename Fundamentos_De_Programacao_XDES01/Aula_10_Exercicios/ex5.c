#include <stdio.h>
#include <string.h>

typedef struct dados
{
    char nome[50];
    char numero[50];
} dados;

int main()
{
    dados telefones[5], temp;
    int i, j;
    
    for (i=0; i<5; i++)
    {
        scanf(" %[^\n]", telefones[i].nome);
        scanf(" %[^\n]", telefones[i].numero);
    }
    
    for (i=0; i < 5 - 1; i++) {
        for (j=i+1; j < 5; j++) {
            if (strcmp(telefones[i].nome, telefones[j].nome) > 0) {
                temp = telefones[i];
                telefones[i] = telefones[j];
                telefones[j] = temp;
            }
        }
    }
    
    for (i=0; i<5; i++)
    {
        printf("%s %s\n", telefones[i].nome, telefones[i].numero);
    }
    
    return 0;
}