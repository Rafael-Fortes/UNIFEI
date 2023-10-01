typedef struct complex Complex;

Complex *criar_Complex(double a, double b);
void liberar_Complex(Complex *num);
void imprimir_Complex(Complex *num);

Complex *somar_Complex(Complex *n1, Complex *n2);
Complex *subtrair_Complex(Complex *n1, Complex *n2);
Complex *multiplicar_Complex(Complex *n1, Complex *n2);
Complex *dividir_Complex(Complex *n1, Complex *n2);