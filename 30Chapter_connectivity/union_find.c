#include <stdlib.h>
#include <stdio.h>

/* The "union" and "find" operatoins are very easily implemented by using the "parent link" representation for the trees. */

int find(int x, int y, int doit)
{
	int i = x; 
	int j = y; 
	while (dad[i] > 0) 
		i = dad[i]; 
	while (dad[j] > 0)
		j = dad[j]; 
	if ((doit != 0) && (i != j))
		dad[j] = i; 
	return (i != j); 
}
/* The array "dad[V]" contains, for each vertex, the index of its parent. for find the parent of a vertex 'j', we simply set "j = dad[j]", and to find the root of the tree to which 'j' belongs, we repeat this operation until 0 is reached.*/

/* The function find returns 0 if the two given vertices are in the same component. */

int find(int x, int y, int doit)
{
	int t; 
	int i = x; 
	int j = y; 
	while (dad[i] > 0)
		i = dad[i]; 
	while (dad[j] > 0)
		j = dad[j]; 
	while (dad[x] > 0)
	{
		t = x; 
		x = dad[x]; 
		dad[t] = i; 
	}
	while (dad[y] > 0)
	{
		t = y; 
		y = dad[y]; 
		dad[t] = j; 
	}
	if ((doit != 0) && (i != j))
		if (dad[j] < dad[i])
		{
			dad[j] += dad[i] -1; 
			dad[i] = j; 
		}
		else 
		{
			dad[i] += dad[j] - 1; 
			dad[j] = i;
		}
	return (i != j); 
}
/* the "dad" array is assumed to be initialized to 0. */
