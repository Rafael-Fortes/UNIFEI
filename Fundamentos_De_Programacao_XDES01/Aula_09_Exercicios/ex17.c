#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[100];
    int i=0, mai=0, min=0;

    scanf(" %[^\n]", frase);

    while (frase[i] != '\0')
    {
        if (islower(frase[i]))
        {
            min++;
        }
        else if (isupper(frase[i]))
        {
            mai++;
        }

        i++;
    }

    printf("%d %d", min, mai);

    return 0;
}