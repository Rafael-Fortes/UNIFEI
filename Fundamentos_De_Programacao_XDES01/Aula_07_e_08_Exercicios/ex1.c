#include <stdio.h>

int main()
{
    char caracteres[8];
    int i;

    for (i=0; i<8; i++)
    {
        scanf(" %c", &caracteres[i]);
    }
    for (i=7; i>=0; i--)
    {
        printf("%c ", caracteres[i]);
    }

    return 0;
}