#include <stdlib.h>
#include <stdio.h>

#include "complex.h"

struct complex {
    double a;
    double b;
};


Complex *criar_Complex(double a, double b) {
    Complex *num = (Complex*) malloc(sizeof(Complex));

    if (num != NULL) {
        num->a = a;
        num->b = b;

        return num;
    } else {
        exit(1);
    }
}


void liberar_Complex(Complex *num) {
    free(num);
}


void imprimir_Complex(Complex *num) {
    printf("%.5lf + %.5lfi\n", num->a, num->b);
}


Complex *somar_Complex(Complex *n1, Complex *n2) {
    Complex *resultado = (Complex*) malloc(sizeof(Complex));

    if (resultado != NULL) {
        resultado->a = n1->a + n2->a;
        resultado->b = n1->b + n2->b;

        return resultado;
    } else {
        exit(1);
    }
}


Complex *subtrair_Complex(Complex *n1, Complex *n2) {
    Complex *resultado = (Complex*) malloc(sizeof(Complex));

    if (resultado != NULL) {
        resultado->a = n1->a - n2->a;
        resultado->b = n1->b - n2->b;

        return resultado;
    } else {
        exit(1);
    }
}


Complex *multiplicar_Complex(Complex *n1, Complex *n2) {
    Complex *resultado = (Complex*) malloc(sizeof(Complex));

    if (resultado != NULL) {
        resultado->a = (n1->a * n2->a) - (n1->b * n2->b);
        resultado->b = (n1->b * n2->a) + (n1->a * n2->b);

        return resultado;
    } else {
        exit(1);
    }
}


Complex *dividir_Complex(Complex *n1, Complex *n2) {
    Complex *resultado = (Complex*) malloc(sizeof(Complex));

    if (resultado != NULL) {
        double divisor = n2->a * n2->a + n2->b * n2->b;
        resultado->a = (n1->a * n2->a + n1->b * n2->b) / divisor;
        resultado->b = (n1->b * n2->a - n1->a * n2->b) / divisor;

        return resultado;
    } else {
        exit(1);
    }
}