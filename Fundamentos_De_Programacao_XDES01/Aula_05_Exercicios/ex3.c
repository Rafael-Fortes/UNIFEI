#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    scanf("%d", &num);

    if (num > 0)
    {
        printf("%lf", sqrt(num));
    }
    else
    {
        printf("%d", (num*num));
    }

    return 0;
}