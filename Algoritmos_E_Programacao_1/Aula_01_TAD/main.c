#include <stdio.h>
#include <stdlib.h>

#include "complex.h"


int main() {
    Complex *num1, *num2, *num3;

    num1 = criar_Complex(10, -3);
    num2 = criar_Complex(2, 4);

    printf("num1: ");
    imprimir_Complex(num1);
    printf("num2: ");
    imprimir_Complex(num2);

    num3 = somar_Complex(num1, num2);
    printf("N1 + N2: ");
    imprimir_Complex(num3);

    num3 = subtrair_Complex(num1, num2);
    printf("N1 - N2: ");
    imprimir_Complex(num3);

    num3 = multiplicar_Complex(num1, num2);
    printf("N1 * N2: ");
    imprimir_Complex(num3);

    num3 = dividir_Complex(num1, num2);
    printf("N1 / N2: ");
    imprimir_Complex(num3);


    liberar_Complex(num1);
    liberar_Complex(num2);
    liberar_Complex(num3);

    return 0;
}
