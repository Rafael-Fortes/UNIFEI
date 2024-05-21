#include <stdio.h>
#include <math.h>

typedef struct polar
{
    float raio;
    float ang;
} polar;

typedef struct cartesiano
{
    float x;
    float y;
} cartesiano;

int main()
{
    polar polares[6];
    cartesiano cartesianos[6];
    float rad;
    int i;
    
    for (i=0; i<6; i++)
    {
        scanf("%f %f", &polares[i].raio, &polares[i].ang);
        
        rad = (polares[i].ang * acos(-1)) / 180;
        cartesianos[i].x = polares[i].raio * cos(rad);
        cartesianos[i].y = polares[i].raio * sin(rad);
    }
    
    for (i=0; i<6; i++)
    {
        printf("(%.2f, %.2f)\n", cartesianos[i].x, cartesianos[i].y);
    }
    
    return 0;
}