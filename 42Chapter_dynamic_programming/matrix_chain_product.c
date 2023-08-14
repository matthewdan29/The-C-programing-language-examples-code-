#include <stdlib.h>
#include <stdio.h>

/* Think of using the chain rule */

for (i = 1; i <= N; i++)
	for (j = i+1; j <= N; j++)
		cost[i][j] = INT_MAX; 
	for (i = 1; i <= N; i++)
		cost[i][i] = 0; 
	for (j = 1; j < N; j++)
		for (i = 1; i <= N-j; i++)
			for (k = i+1; k <= i+j; k++)
				{
					t = cost[i][k-1] + cost[k][i+j] + r[i]*r[k]*r[i+j+1]; 
					if (t < cost[i][i+j])
					{
						cost[i][i+j] = t; 
						best[i][i+j] = k; 
					}
				}

/* For "1 <= j <= N -1", we find the minimum cost of computing 
 * 			M sub(i+j) iff M sub(i) */

/* This is poorly explain but anyone that understood this notation please DM me on my social media I would like to talk to you about bit overflow in matrix on endpoints computing devices. */

order(int i, int j)
{
	if (i == j)
		printf("%c", name(i))
	else 
	{
		printf("("); 
		order(i, best[i][j]-1); 
		order(best[i][j], j); 
		printf(")"); 
	}
}


