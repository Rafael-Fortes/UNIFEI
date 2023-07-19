#include <stdio.h>
#include <stdlib.h>

int main()
{
    char strNum[10];
    int i, soma=0;

    for (i=0; i<4; i++)
    {
        scanf(" %[^\n]", strNum);
        soma += atoi(strNum);
    }

    printf("%d", soma);

    return 0;
}