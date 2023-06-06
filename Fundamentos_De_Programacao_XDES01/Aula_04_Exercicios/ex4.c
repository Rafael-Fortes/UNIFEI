#include <stdio.h>

int main()
{
    int dias;
    float km, agencia1, agencia2;

    scanf("%f %d", &km, &dias);

    agencia1 = (62 * dias) + (km * 1.4);
    agencia2 = (80 * dias) + (km * 1.2);

    printf("%.2f %.2f", agencia1, agencia2);

    return 0;
}