#include <stdio.h>

int main()
{
    float salario, prestacao;

    scanf("%f %f", &salario, &prestacao);

    if (prestacao > salario * 0.2)
    {
        printf("emprestimo nao concedido");
    }
    else
    {
        printf("emprestimo concedido");
    }

    return 0;
}