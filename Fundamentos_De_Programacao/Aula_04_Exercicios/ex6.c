#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p;
    double area;

    scanf("%f %f %f", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = p * ((p-a) * (p-b) * (p-c));
    area = sqrt(area);

    printf("%.1f", area);


    return 0;
}