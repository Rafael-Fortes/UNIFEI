#include <stdio.h>

int main() {
    int quantidade_pecas;
    int horas, minutos, segundos;

    scanf("%d", &quantidade_pecas);

    int tempo_total_segundos = quantidade_pecas * 17;

    horas = tempo_total_segundos / 3600;
    minutos = (tempo_total_segundos % 3600) / 60;
    segundos = (tempo_total_segundos % 3600) % 60;

    printf("%d %d %d", horas, minutos, segundos);

    return 0;
}