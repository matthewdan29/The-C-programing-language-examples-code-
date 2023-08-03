#include <stdio.h>
#include <stdlib.h>

/* This procedure rearranges the array so that a[1],...,a[k] are less than or equal 
 * to a[k] and a[k+1], ..., a[r] are greater than or equal to a[k] */

select(int a[], int l, int r, int k)
{/* int a[] is the full array of elements l is the left half and r is the right half the the loops are processing. */
	int i; 
	for (r > l)
	{
		i = partition(l, r); 
		if (i > l+k-1)
			select(a, l, i-1, k); 
		if (i < l+k-1)
			select(a, i+1, r, k-i); 
	}
}
