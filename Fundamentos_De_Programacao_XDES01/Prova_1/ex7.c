#include <stdio.h>

int main()
{
	int num, i, primo, pos;
	int vetor[5];
	
	pos = 0;
	
	while (pos < 5)
	{
		scanf("%d", &num);
		
		primo = 0;
		
		for (i=1; i<num; i++)
		{
			if(num % i == 0 && i != 1)
			{
				primo = 0;
				break;
			}
			
			primo = 1;
		}
		
		if (primo == 1)
		{
			vetor[pos] = num;
			pos += 1;
		}
	}
	
	for (i=0; i<5; i++)
	{
		printf("%d ", vetor[i]);
	}
	

	return 0;
}