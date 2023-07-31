#include <stdlib.h>
#include <stdio.h>

/* this version of insertion sort with an extra array 
 * this array is a index array 
 * where it's being modifed */

insertion(int a[], int p[], int N)
{
	int i, j, v; 
	for (i = 0; i <= N; i++)
		p[i] = i; 
	for (i = 2; i <= N; i++)
	{
		v = p[i]; 
		j = i; 
		while (a[p[j-1]] > a[v])
		{
			p[j] = p[j-1]; 
			j--; 
		}
		p[j] = j; 
	}
}
