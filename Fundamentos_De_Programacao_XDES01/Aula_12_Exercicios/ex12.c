#include <stdio.h>
#include <string.h>

int afimb(char *a, char *b);

int main()
{
    char string_a[100] = "arara";
    char string_b[100] = "ra";

    printf("\n%d\n", afimb(string_a, string_b));

    return 0;
}

int afimb(char *a, char *b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int i, j;
    char *p_a=a, *p_b=b;

    if (lenB < lenA) {
        return 0;
    }

    j = lenA-1;
    for (i=lenB-1; i>=lenB-lenA; i--)
    {
        p_a = a+j;
        p_b = b+i;

        if (*p_a != *p_b)
        {
            return 0;
            break;
        }

        j--;
    }

    return 1;
}