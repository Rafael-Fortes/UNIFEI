#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[100];
    int i=0, j=0;

    scanf(" %[^\n]", frase);

    while (frase[i] != '\0')
    {
        if (j==0)
        {
            printf("%c", toupper(frase[i]));
        }
        else
        {
            printf("%c", frase[i]);
        }

        if (frase[i] == ' ')
        {
            j=0;
        }
        else
        {
            j++;
        }

        i++;
    }

    return 0;
}