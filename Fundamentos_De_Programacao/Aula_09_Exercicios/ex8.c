#include <stdio.h>

int main()
{
    char frase[100];
    int i, x, y;

    scanf("%[^\n]", frase);
    scanf("%d %d", &x, &y);

    i = x;

    while (i <= y)
    {
        printf("%c", frase[i]);

        i++;
    }


    return 0;
}