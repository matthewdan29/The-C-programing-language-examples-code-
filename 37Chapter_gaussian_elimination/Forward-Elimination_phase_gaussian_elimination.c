#include <stdlib.h>
#include <stdio.h>

eliminate()
{
	int i; 
	int j; 
	int k; 
	int max; 
	float t; 
	for (i = 1; i <= N; i++)
	{
		max = i; 
		for (j = i+1; j <= N; j++)
			if (abs(a[j][i]) > abs(a[max][i]))
				max = j; 
		for (k = i; k <= N + 1; k++)
		{
			t = a[i][k]; 
			a[i][k] = a[max][k]; 
			a[max][k] = t; 
		}
		for (j = i+1; j <= N; j++)
			for (k = N+1; k >= i; k--)
				a[j][k] -= a[i][k] * a[j][i]/a[i][i]; 
	}
}

