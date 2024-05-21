#include <stdio.h>

int main()
{
    char frase[100], copia[100];
    int i=0, cont=0;

    scanf("%[^\n]", frase);

    while (frase[i] != '\0')
    {
        if (frase[i] != ' ')
        {
            copia[cont] = frase[i];

            cont++;
        }

        i++;
    }

    copia[cont] = '\0';
    i=0;

    printf("%s", copia);

    return 0;
}