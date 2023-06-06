#include <stdio.h>

int main()
{
    float tempos[8];
    int p1=0, p2=1, p3=2;
    int i;

    for (i=0; i<8; i++)
    {
        scanf("%f", &tempos[i]);
    }

    for (i=0; i<8; i++)
    {
        if (tempos[i] < tempos[p1])
        {
            p3 = p2;
            p2 = p1;
            p1 = i;
        }
        if (tempos[i] < tempos[p2] && tempos[i] > tempos[p1])
        {
            p3 = p2;
            p2 = i;
        }
        if (tempos[i] < tempos[p3] && tempos[i] > tempos[p2])
        {
            p3 = i;
        }
    }

    printf("%f %d\n", tempos[p1], p1);
    printf("%f %d\n", tempos[p2], p2);
    printf("%f %d\n", tempos[p3], p3);

    return 0;
}