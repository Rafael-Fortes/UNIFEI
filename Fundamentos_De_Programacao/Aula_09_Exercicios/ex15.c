#include <stdio.h>

int main()
{
    char frase[100];
    int i=0, cont=0;

    scanf("%[^\n]", frase);

    while (frase[i] != '\0')
    {
        if (frase[i] == ' ')
        {
            cont++;
        }

        i++;
    }

    cont++;

    printf("%d", cont);

    return 0;
}