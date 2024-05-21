#include <stdio.h>

int main()
{
    float vetor_normal[10];
    float vetor_quadrado[10];
    float num;
    int i;

    for (i=0; i<10; i++)
    {
        scanf("%f", &num);
        vetor_normal[i] = num;
        vetor_quadrado[i] = num * num;
    }

    for (i=0; i<10; i++)
    {
        printf("%.0f ", vetor_normal[i]);

    }

    printf("\n");

    for (i=0; i<10; i++)
    {
        printf("%.0f ", vetor_quadrado[i]);

    }
    return 0;
}