#include <stdlib.h>
#include <stdio.h>



for (j = 1; j <= N; j++)
{
	for (i = 1; i <= M; i++)
		if (i >= size[j])
			if (cost[i] < cost[i-size[j]+val[j]])
			{
				cost[i] = cost[i-size[j]]+val[j]; 
				best[i] = j; 
			}
}

/* "cost[i]" is the most you can fit in a box of capacity 'i' and "best[i]" is the last item that was added to achieve that maximum. Read the knapsack readme.*/
