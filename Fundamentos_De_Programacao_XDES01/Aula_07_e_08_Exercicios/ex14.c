#include <stdio.h>

int main()
{
    int matriz[3][3]={0};
    int i, j;
    int vitoria=0, controlador=0;

    // preenchendo a matriz
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // verificando a vitória na linha;
    for (i=0; i<3; i++)
    {
        controlador = 0;
        for (j=0; j<3; j++)
        {
            if (matriz[i][j] == 1)
            {
                controlador++;
            }
        }
        if (controlador == 3)
        {
            vitoria = 1;
            break;
        }
    }

    // verificando a vitória na coluna
    if (vitoria == 0)
    {
        for (i=0; i<3; i++)
        {
            controlador = 0;
            for (j=0; j<3; j++)
            {
                if (matriz[j][i] == 1)
                {
                    controlador++;
                }
            }
            if (controlador == 3)
            {
                vitoria = 1;
                break;
            }
        }
    }

    // verificando na diagonal
    if (vitoria == 0)
    {
        controlador = 0;
        for (i=0; i<3; i++)
        {
            if (matriz[i][i] == 1)
            {
                controlador++;
            }
            else
            {
                break;
            }
        }
        if (controlador == 3)
        {
            vitoria = 1;
        }
    }

    // verificando na diagonal
    if (vitoria == 0)
    {
        controlador = 0;
        for (i=0; i<3; i++)
        {
            if (matriz[i][3-(i+1)] == 1)
            {
                controlador++;
            }
        }
        if (controlador == 3)
        {
            vitoria = 1;
        }
    }

    if (vitoria == 1)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}