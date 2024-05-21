#include <stdio.h>
#include <math.h>

#define M_PI 3.14159
int main()
{
    double angulo, pi = M_PI;

    scanf("%lf", &angulo);

    angulo = (angulo * pi) / 180.0;

    printf("%.1lf %.1lf %.1lf", sin(angulo), cos(angulo), tan(angulo));

    return 0;
}