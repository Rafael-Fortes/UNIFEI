#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    double delta, x1, x2;
    
    scanf("%f %f %f", &a, &b, &c);
    
    delta = (b*b) - 4 * a * c;
    
    if (delta < 0)
    {
        printf("sem raizes reais");
    }
    else if (delta == 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        printf("%lf", x1);
    }
    else
    {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        
        if (x1 < x2)
        {
            printf("%lf %lf", x1, x2);
        }
        else
        {
            printf("%lf %lf", x2, x1);
        }
    }
    
    
    x2 = (-b - sqrt(delta)) / (2*a);
    
    return 0;
}