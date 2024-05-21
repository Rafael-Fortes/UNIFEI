#include <stdio.h>

int main()
{
    char frase[100], copia[100];
    int i=0, tamanho=0, palindromo=1;

    scanf("%[^\n]", frase);

    while (frase[i] != '\0')
    {
        if (frase[i] != ' ')
        {
            copia[tamanho] = frase[i];
            tamanho++;
        }

        i++;
    }

    i = 0;
    tamanho -= 1;

    while (tamanho >= 0)
    {
        if (copia[tamanho] != copia[i])
        {
            palindromo = 0;
            break;
        }
        
        tamanho--;
        i++;
    }

    if (palindromo == 1)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}