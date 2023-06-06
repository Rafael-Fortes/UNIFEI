#include <stdio.h>

int main()
{
	int n, p, np;
	int i, combinacoes;
	int fatorial_n, fatorial_p, fatorial_np;
	
	fatorial_n = 1;
	fatorial_p = 1;
	fatorial_np = 1;
	
	do
	{
		scanf("%d %d", &n, &p);
	} while (n < 1 || p < 1);
	
	for (i=1; i<=n; i++)
	{
		fatorial_n *= i;
	}
	
	for (i=1; i<=p; i++)
	{
		fatorial_p *= i;
	}
	
	np = n - p;
	
	for (i=1; i<=np; i++)
	{
		fatorial_np *= i;
	}
	
	
	combinacoes = fatorial_n / (fatorial_p * fatorial_np * 1.0);
	
	printf("%d", combinacoes);
	
	
	return 0;
}