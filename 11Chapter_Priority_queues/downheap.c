#include <stdlib.h>
#include <stdio.h>

/* If the key at the root is too small, it must be moved down the heap 
 * without violoating the heap property at any of the nodes touched. */

downheap(int k)
{
	int j; 
	int v; 	
	v = a[k]; 
	while (k <= N/2)
	{		/* ONE THING TO REMEMBER WITH A TREE BEING */
			/* IN AN ARRAY FORM YOU MUST REMEMBER THE IF h IS THE ROOT NEXT TO IT IS J AND J+1 ARE THE CHILDREN NEXT TO IT. */
		j = k+k; 
		if (j < N && a[j] < a[j+1])
			j++; 
		if (v >= a[j])
			break; 
		a[k] = a[j]; 
		k = j; 
	}
	a[k] = v; 
}

/* This procedure moves down the heap, exvhancging the node at position 'k'
 * with the larger of its two children if necessary and stop when the node at 'k' is larger than both children or the bottom is reached.*/
