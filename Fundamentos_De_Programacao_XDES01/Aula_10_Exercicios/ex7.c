#include <stdio.h>
#include <string.h>

#define tam 8

typedef struct dados
{
	char titulo[50];
	char autor[50];
	int ano;
}dados;

int main()
{

	dados v[tam];
	int i;
	char nome[50];
	
	for(i=0;i<tam;i++)
	{

		scanf(" %[^\n]",v[i].titulo);
		scanf(" %[^\n]",v[i].autor);
		scanf("%d",&v[i].ano);

	}
	
	scanf(" %[^\n]",nome);
	while(strcmp(nome,"sair")!=0)
	{
		printf("Livros de %s: \n",nome);
		for(i=0;i<tam;i++)
		{
			if(strcmp(v[i].autor,nome)==0)
			{
				printf("%s (%d)\n",v[i].titulo,v[i].ano);
				//printf("\n");
			}
		}
        printf("\n");
		scanf(" %[^\n]",nome);
	}
	
	return 0;
}