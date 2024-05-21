#include <stdio.h>

typedef struct aluno
{
    char nome[100];
    char curso[50];
    char matricula[20];
} aluno;

int main()
{
    aluno alunos[5];
    int i;
    
    for (i=0; i<5; i++)
    {
        scanf(" %[^\n]", alunos[i].nome);
        scanf(" %[^\n]", alunos[i].matricula);
        scanf(" %[^\n]", alunos[i].curso);
    }
    
    for (i=0; i<5; i++)
    {
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %s\n", alunos[i].matricula);
        printf("Curso: %s\n\n", alunos[i].curso);
    }
    
    return 0;
}