#include <stdio.h>
#include <math.h>

# define pi acos(-1)

int main()
{
    float d, l1, l2, l3;
    double volume_caixa, volume_bola, r;
    
    scanf("%f %f %f %f", &d, &l1, &l2, &l3);
    
    if (l1 > d && l2 > d && l3 > d)
    {
        r = d / 2.0;
        
        volume_caixa = l1 * l2 * l3;
        volume_bola = ((4/3) * pi) * (r*r*r);
        
        if (volume_bola <= volume_caixa)
        {
            printf("sim");
        }
    }
    else
    {
        printf("nao");
    }
    
    return 0;
}