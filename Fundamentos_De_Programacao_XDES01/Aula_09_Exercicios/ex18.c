#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[50], palavra2[50];
    char space[5] = " ";

    scanf(" %[^\n]", palavra1);
    scanf(" %[^\n]", palavra2);

    strcat(palavra1, space);
    strcat(palavra1, palavra2);

    printf("%s", palavra1);

    return 0;
}