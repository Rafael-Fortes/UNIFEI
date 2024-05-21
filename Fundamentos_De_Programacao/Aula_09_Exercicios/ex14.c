#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long int num;
    char strNum[100];
    int vetor[10] = {0};
    int i=0;

    scanf("%lld", &num);
    sprintf(strNum, "%lld", num);

    while (strNum[i] != '\0')
    {
        if (strNum[i] == '0')
        {
            vetor[0] += 1;
        }
        else if (strNum[i] == '1')
        {
            vetor[1] += 1;
        }
        else if (strNum[i] == '2')
        {
            vetor[2] += 1;
        }
        else if (strNum[i] == '3')
        {
            vetor[3] += 1;
        }
        else if (strNum[i] == '4')
        {
            vetor[4] += 1;
        }
        else if (strNum[i] == '5')
        {
            vetor[5] += 1;
        }
        else if (strNum[i] == '6')
        {
            vetor[6] += 1;
        }
        else if (strNum[i] == '7')
        {
            vetor[7] += 1;
        }
        else if (strNum[i] == '8')
        {
            vetor[8] += 1;
        }
        else if (strNum[i] == '9')
        {
            vetor[9] += 1;
        }

        i++;
    }

    for (i=0; i<10; i++)
    {
        printf("%d = %d\n", i, vetor[i]);
    }
}