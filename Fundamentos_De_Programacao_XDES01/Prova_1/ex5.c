#include <stdio.h>

int main()
{
	float a1, a2, a3, maior;
	
	scanf("%f %f %f", &a1, &a2, &a3);
	
	maior = a1;
	
	if (a2 > maior)
	{
		maior = a2;
	}
	if (a3 > maior)
	{
		maior = a3;
	}
	
    if (maior == 90)
	{
		printf("retangulo");
	}
	else if (maior < 90)
	{
		printf("acutangulo");
	}
	else if (maior > 90)
	{
		printf("obtusangulo");
	}

	return 0;
}