#include <stdio.h>
#include <math.h>

#define pi acos(-1)

int main()
{
    float r, h;
    double volume;

    scanf("%f %f", &r, &h);
    
    volume = pi * (r*r) * h;

    printf("%.2lf", volume);

    return 0;
}