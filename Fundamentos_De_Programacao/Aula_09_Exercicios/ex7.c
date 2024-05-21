#include <stdio.h>

int main()
{
    char frase1[100], frase2[100];
    int tamanho1=0, tamanho2=0, fim1=0, fim2=0;
    int i=0;    

    scanf("%[^\n]", frase1);
    scanf(" %[^\n]", frase2);

    while (fim1 == 0 || fim2 == 0)
    {
        if (frase1[i] != '\0' && fim1 == 0)
        {
            tamanho1++;
        }
        else
        {
            fim1 = 1;
        }

        if (frase2[i] != '\0' && fim2 == 0)
        {
            tamanho2++;
        }
        else
        {
            fim2 = 1;
        }

        i++;
    }

    if (tamanho1-tamanho2 > 0)
    {
        printf("A frase 1 possui %d caracteres a mais que a frase 2.", tamanho1-tamanho2);
    }
    else
    {
        printf("A frase 1 possui %d caracteres a menos que a frase 2.", -1*(tamanho1-tamanho2));
    }

    return 0;
}