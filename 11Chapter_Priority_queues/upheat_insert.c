#include <stdlib.h>
#include <stdio.h>

/* To be able to build a heap, it is necessary to implement insert() first. 
 * Since insert() will increase the size of the heap by one
 *
 * The following implementation, insert() adds a new item to a[N], then calls upheat(N) to fix the heap condition violation at "N" */

upheap(int k)
{
	int v; 
	v = a[k]; 
	a[0] = INT_MAX; 
	while (a[k/2] <= v)
	{
		a[k] = a[k/2]; 
		k = k/2; 
	}
	a[k] = v;
}

insert(int v)
{
	a[++N] = v; 
	upheap(N);
}

/* If k/2 were replaced by k-1 everywhere in this program, it would have in essence one step of insertion sort */
