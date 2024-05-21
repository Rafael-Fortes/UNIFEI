#include <stdio.h>

int main()
{
    char frase[100], letra;
    int i=0, posicao=-1;

    scanf("%[^\n]", frase);
    scanf(" %c %d", &letra, &i);

    while (frase[i] != '\0')
    {
        if (frase[i] == letra)
        {
            posicao = i;
            break;
        }
        
        i++;
    }

    printf("%d", posicao);

    return 0;
}