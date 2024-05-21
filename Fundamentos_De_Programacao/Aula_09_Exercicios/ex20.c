#include <stdio.h>
#include <string.h>

int main()
{
    char S[100001];
    int i, size;

    scanf("%[^\n]", S);
    size = strlen(S);

    for (i=(size/2)+1; i<size; i++)
    {
        printf("%c", S[i]);
    }

    return 0;
}