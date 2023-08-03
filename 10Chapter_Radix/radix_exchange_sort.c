#include <stdlib.h>
#include <stdio.h>

/* Think of this a s quicksort by with bit comparason 
 * say you want all files that has 0 in the kth position of the name 
 * this will asure that all files is sorted in such a order that 0 in that position is first */

radixexchange(int a[], int l, int r, int b)
{
	int t; 
	int i; 
	int j; 
	if (r > l && b >= 0)
	{
		i = l; 
		j = r; 
		while ( j != i)
		{
			while (bits(a[i], b, l) == 0 && i < j)
				i++; 
			while (bits(a[j], b, l) != 0 && j > i)
				j--; 
			t = a[i]; 
			a[i] = a[j]; 
			a[j] = t; 	
		}
		if (bits(a[r], b, l) == 0)
			j++; 
		radixexchange(a, l, j-1, b-1); 
		radixexchange(a, j, r, b-1); 
	}
}

/* The call radixexchange(l, N, 30) will sort the array if a[1]...[N] 
 * are positive integers less than 2^(32) (so that they can be represented as 31-bit binary numbers) */

/* One serious potential problem for radix sort not brought out in this example is that degenerate partitions can happen frequently.
 * This situation arises commonly in real files when small numbers being sorted 
 * */
