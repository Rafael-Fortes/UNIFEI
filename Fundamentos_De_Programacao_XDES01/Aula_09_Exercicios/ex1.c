#include <stdio.h>

int main()
{
    char frase[100];
    int i=0, vogais=0;
    
    scanf("%[^\n]", frase);
    
    while (frase[i] != '\0')
    {
        if (frase[i] == 'a' || frase[i] == 'A')
        {
            vogais++;
        }
        else if (frase[i] == 'e' || frase[i] == 'E')
        {
            vogais++;
        }
        else if (frase[i] == 'i' || frase[i] == 'I')
        {
            vogais++;
        }
        else if (frase[i] == 'o' || frase[i] == 'O')
        {
            vogais++;
        }
        else if (frase[i] == 'u' || frase[i] == 'U')
        {
            vogais++;
        }
        
        i++;
    }
    
    printf("%d", vogais);
    
    
    return 0;
}