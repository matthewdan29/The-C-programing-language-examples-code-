#include <stdio.h>
#include <stdlib.h>

/* the elements to the left of the index 'i' are in sorted order during the sort
 *  but they are not in their final position, as they may have to be moved to make room for smaller elements encountered later */

instertion(int a[], int N)
{
	int i, j, v; 
	for (i =2; i <= N; i++)
	{
		v = a[i]; j = i; 
		while(a[j-1] > v)
		{
			a[j] = a[j-1]; 
			j--; 
		}
		a[j] = v; 
	}
}
