#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;
    
    scanf("%f %c", &altura, &sexo);
    
    if (sexo == 'm' || sexo == 'M') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'f' || sexo == 'F') {
        peso_ideal = (62.1 * altura) - 44.7;
    }
    
    printf("%.6f\n", peso_ideal);
    
    return 0;
}