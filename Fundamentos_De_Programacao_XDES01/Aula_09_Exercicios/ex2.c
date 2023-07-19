#include <stdio.h>

int main()
{
    char frase[100];
    int i=0, a_cont=0, e_cont=0, i_cont=0, o_cont=0, u_cont=0;
    
    scanf("%[^\n]", frase);
    
    while (frase[i] != '\0')
    {
        if (frase[i] == 'a' || frase[i] == 'A')
        {
            a_cont++;
        }
        else if (frase[i] == 'e' || frase[i] == 'E')
        {
            e_cont++;
        }
        else if (frase[i] == 'i' || frase[i] == 'I')
        {
            i_cont++;
        }
        else if (frase[i] == 'o' || frase[i] == 'O')
        {
            o_cont++;
        }
        else if (frase[i] == 'u' || frase[i] == 'U')
        {
            u_cont++;
        }
        
        i++;
    }
    
    printf("A = %d\n", a_cont);
    printf("E = %d\n", e_cont);
    printf("I = %d\n", i_cont);
    printf("O = %d\n", o_cont);
    printf("U = %d", u_cont);
    
    
    return 0;
}