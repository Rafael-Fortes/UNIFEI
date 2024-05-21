#include <stdio.h>

int main() {
    int idade;
    
    scanf("%d", &idade);
    
    if (idade >= 4 && idade <= 5) {
        printf("Fraldinha\n");
    } else if (idade >= 6 && idade <= 12) {
        printf("Infantil\n");
    } else if (idade >= 13 && idade <= 18) {
        printf("Juvenil\n");
    } else if (idade > 18) {
        printf("Adulto\n");
    }
    
    return 0;
}