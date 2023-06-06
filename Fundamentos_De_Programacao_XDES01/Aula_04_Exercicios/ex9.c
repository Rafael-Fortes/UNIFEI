#include <stdio.h>

int main()
{
    float ch_total, h_faltas;
    int porcentagem_faltas;

    scanf("%f %f", &ch_total, &h_faltas);

    porcentagem_faltas = (h_faltas / ch_total) * 100.0;

    printf("%d", porcentagem_faltas);


    return 0;
}