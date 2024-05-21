#include <stdio.h>

int main() {
    float altura;
    char sexo;
    
    scanf("%f %c", &altura, &sexo);
    
    if ((sexo == 'm' || sexo == 'M') && altura >= 1.75) {
        printf("sim\n");
    } else if ((sexo == 'f' || sexo == 'F') && altura >= 1.80) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }
    
    return 0;
}