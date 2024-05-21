#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[100];
    int soma=0;
    int i;

    for (i=0; i<4; i++)
    {
        scanf("%s", frase);
        soma += atoi(frase);
    }

    sprintf(frase, "%d", soma);
    printf("%s", frase);

    return 0;
}