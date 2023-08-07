#include <stdlib.h>
#include <stdio.h>

/* This is a representation for a graphs "adjacency matrix" to see what virtext are next to each other. */

/* The order in which the edge appear is not important, since all orderings of the edges represent the same graph and result in the same adjacency matrix, as computed. */

#define maxV 50
int j; 
int x; 
int y; 
int V; 
int E; 
int a[maxV][maxV]; 
adjmatrix()
{
	scanf("%d %d\n", &V, &E);
	for (x = 1; x <= V; x++)
		for (y = 1; y <= V; y++)
			a[x][y] = 0; 
	for (x = 1; x <= V; x++)
		a[x][x] = 1; 
	for (j = 1; j <= E; j++)
	{
		scanf("%c %c\n", &v1, &v2); 
		x = index(v1); 
		y = index(v2); 
		a[x][y] = 1; 
		a[y][x] = 1; 
	}
}

/* This for a more dense graph */
