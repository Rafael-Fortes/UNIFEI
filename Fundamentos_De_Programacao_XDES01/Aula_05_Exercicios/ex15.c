#include <stdio.h>

int main() {
    int numero;
    
    scanf("%d", &numero);
    
    if ((numero % 3 == 0) && (numero % 5 != 0)) {
        printf("divisivel por 3\n");
    } else if ((numero % 3 != 0) && (numero % 5 == 0)) {
        printf("divisivel por 5\n");
    } else {
        printf("nao divisivel\n");
    }
    
    return 0;
}