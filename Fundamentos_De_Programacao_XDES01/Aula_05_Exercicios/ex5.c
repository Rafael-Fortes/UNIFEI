#include <stdio.h>

int main()
{
    float n1, n2;

    scanf("%f %f", &n1, &n2);

    if ((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10))
    {
        printf("%f", ((n1 + n2) / 2));
    }
    else
    {
        printf("notas incorretas");
    }

    return 0;
}