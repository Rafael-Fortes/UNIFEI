#include <stdio.h>
#include <string.h>

void formata_data(int dia, int mes, int ano);

int main()
{
    int dia, mes, ano;

    scanf("%d/%d/%d", &dia, &mes, &ano);
    formata_data(dia, mes, ano);

    return 0;
}

void formata_data(int dia, int mes, int ano)
{
    char vetor_mes[12][20] = {
        "janeiro", "fevereiro", "marco", "abril", "maio",
        "junho", "julho", "agosto", "setembro", "outubro",
        "novembro", "dezembro"
    };
    
    printf("%d de %s de %d", dia, vetor_mes[mes-1], ano);

    return;
}