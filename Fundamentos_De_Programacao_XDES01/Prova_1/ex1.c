#include <stdio.h>

int main()
{
    int idioma;
    char sexo, escolaridade;

    scanf("%d %c %c", &idioma, &sexo, &escolaridade);
    
    if (sexo == 'M')
    {
        if (idioma >= 2 && escolaridade == 'M')
        {
            printf("sim");
        }
        else if (idioma >= 1 && escolaridade == 'S')
        {
            printf("sim");
        }
        else
        {
            printf("nao");
        }
    }
    else if (sexo == 'F')
    {
        if (idioma >= 3 && escolaridade == 'M')
        {
            printf("sim");
        }
        else if (idioma >= 2 && escolaridade == 'S')
        {
            printf("sim");
        }
        else
        {
            printf("nao");
        }
    }

    return 0;
}