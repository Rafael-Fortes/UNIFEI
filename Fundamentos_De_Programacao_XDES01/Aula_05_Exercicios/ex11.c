#include <stdio.h>

int main()
{
    int idade, t_servico;
    
    scanf("%d %d", &idade, &t_servico);
    
    if ((idade >= 64 || t_servico >= 30) || (idade >= 60 && t_servico >= 25))
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }
    
    
    return 0;
}