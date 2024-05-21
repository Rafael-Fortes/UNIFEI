#include <stdio.h>

int main()
{
    char frase[100];
    int i=0;

    scanf("%[^\n]", frase);

    while (frase[i] != '\0')
    {
        i++;
    }

    i--;
    
    while (i >= 0)
    {
        printf("%c", frase[i]);
        i--;
    }

    return 0;
}