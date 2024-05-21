#include <stdio.h>

int main()
{
    int par=0, impar=0;
    int num, i;

    for (i=0; i<12; i++)
    {
        scanf("%d", &num);
        
        if (num % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("%d %d", par, impar);

    return 0;
}