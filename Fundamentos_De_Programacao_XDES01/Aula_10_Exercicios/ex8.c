#include <stdio.h>

typedef struct complexo
{
    float real;
    float imag;
} Complexo;

int main() 
{
    Complexo num1, num2, soma, subtracao, multiplicacao;

    scanf("%f %f", &num1.real, &num1.imag);
    scanf("%f %f", &num2.real, &num2.imag);

    soma.real = num1.real + num2.real;
    soma.imag = num1.imag + num2.imag;

    subtracao.real = num1.real - num2.real;
    subtracao.imag = num1.imag - num2.imag;

    multiplicacao.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    multiplicacao.imag = (num1.real * num2.imag) + (num1.imag * num2.real);

    printf("Soma: %f + (%f)i\n", soma.real, soma.imag);
    printf("Subtracao: %f + (%f)i\n", subtracao.real, subtracao.imag);
    printf("Produto: %f + (%f)i\n", multiplicacao.real, multiplicacao.imag);

    return 0;
}