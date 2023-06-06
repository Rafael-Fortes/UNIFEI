#include <stdio.h>

int main()
{
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == b && b == c)
    {
        printf("equilatero");
    }
    else if (a == b || b == c)
    {
        printf("isosceles");
    }
    else
    {
        printf("escaleno");
    }
    
    return 0;
}