#include <stdio.h>

int main()
{
	//int matriz[1000][1000] = {0};
	//int vetor[1000] = {0}
	int num, pos;
	int m, n, p;
	int i, j, k;
	
	// lendo a matriz
	scanf("%d %d", &m, &n);
	int matriz[m][n];
	
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	
	scanf("%d", &p);
	int vetor[p];
	
	pos = 0;
	
	// lendo o vetor
	for (k=0; k<p; k++)
	{
		scanf("%d", &num);
		
		if (num % 2 != 0)
		{
			vetor[pos] = num;
			pos += 1;
		}
	}
	
	if (pos>0)
	{
		for (i=0; i<m; i++)
		{
			for (j=0; j<n; j++)
			{
				for (k=0; k<pos; k++)
				{
					if (vetor[k] == matriz[i][j])
					{
						printf("%d ", vetor[k]);
					}
				}
			}
		}

	}

	return 0;
}