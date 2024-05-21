#include <stdio.h>

int main()
{
    int vet_x[8], vet_y[8];
    int i, j, controle;

    for (i=0; i<8; i++)
    {
        scanf("%d", &vet_x[i]);
    }
    for (i=0; i<8; i++)
    {
        scanf("%d", &vet_y[i]);
    }

    // Soma entre X e Y
    for (i=0; i<8; i++)
    {
        printf("%d ", (vet_x[i] + vet_y[i]));
    }
    printf("\n");

    // Produto entre X e Y
    for (i=0; i<8; i++)
    {
        printf("%d ", (vet_x[i] * vet_y[i]));
    }
    printf("\n");

    
    // Interseção entre X e Y
    for (i=0; i<8; i++)
    {
        for (j=0; j<8; j++)
        {
            if (vet_x[i] == vet_y[j])
            {
                printf("%d ", vet_x[i]);
            }
        }
    }
    printf("\n");


    // diferença
    for (i=0; i<8; i++)
    {
        controle = 0;

        for (j=0; j<8; j++)
        {
            if (vet_x[i] == vet_y[j])
            {
                controle = 1;
                break;
            }
        }

        if (controle == 0)
        {
            printf("%d ", vet_x[i]);
        }
    }
    printf("\n");


    return 0;
}