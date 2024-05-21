#include <stdio.h>

int main()
{
    char frase_a[100], frase_b[100];
    int tamanho_a=0, tamanho_b=0;
    int i=0, j=0, cont=0;

    scanf("%[^\n]", frase_a);
    scanf(" %[^\n]", frase_b);

    // Pegando o tamanho das strings.
    while (frase_a[i] != '\0')
    {
        tamanho_a++;
        i++;
    }
    i = 0;
    while (frase_b[i] != '\0')
    {
        tamanho_b++;
        i++;
    }

    // Percorrendo as duas strings e comparando a partir do caractere de índice i.
    for (i=0; i<=tamanho_b-tamanho_a; i++)
    {
        for (j=0; j<tamanho_a; j++)
        {
            if (frase_b[i+j] != frase_a[j])
            {
                break;
            }
        }

        if (j==tamanho_a)
        {
            cont++;
        }
    }

    printf("%d", cont);

    return 0;
}