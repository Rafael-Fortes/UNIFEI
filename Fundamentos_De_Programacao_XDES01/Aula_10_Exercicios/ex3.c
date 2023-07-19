#include <stdio.h>
#include <string.h>

typedef struct aluno
{
    char nome[100];
    char matricula[20];
    char situacao[20];
    float p1, p2, p3, media;
} aluno;

int main()
{
    aluno alunos[5];
    int i, pos_p1, pos_media;
    float maior_p1=0, maior_media=0;
    
    for (i=0; i<5; i++)
    {
        scanf(" %[^\n]", alunos[i].matricula);
        scanf(" %[^\n]", alunos[i].nome);
        scanf(" %f %f %f", &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
        
        alunos[i].media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3.0;
        
        if (alunos[i].media >= 6.0)
        {
            strcpy(alunos[i].situacao, "Aprovado");
        }
        else
        {
            strcpy(alunos[i].situacao, "Reprovado");
        }
        
        if (i==0)
        {
            maior_p1 = alunos[i].p1;
            maior_media = alunos[i].media;
            pos_p1 = i;
            pos_media = i;
        }
        else
        {
            if (alunos[i].p1 > maior_p1)
            {
                maior_p1 = alunos[i].p1;
                pos_p1 = i;
            }
            if (alunos[i].media > maior_media)
            {
                maior_media = alunos[i].media;
                pos_media = i;
            }
        }    
    }
    
    printf("Maior nota na P1: %.2f\n", alunos[pos_p1].p1);
    printf("%s\n\n", alunos[pos_p1].nome);
    
    printf("Maior media: %s\n", alunos[pos_media].nome);
    printf("Valor: %.2f\n\n", alunos[pos_p1].media);
    
    for (i=0; i<5; i++)
    {
        printf("%s %s %s\n", alunos[i].matricula, alunos[i].nome, alunos[i].situacao);
    }
    
    return 0;
}