#include <stdio.h>
#include <stdlib.h>

/* The following program is an implementation of selection short */
/* for each i from 1 to N-1, it exchanges a[i] with the min 
 * element in a[i], .... , a{N}: */

selection(int a[], int N)
{
	int i, j, min, t; 
	for (i = 1; i < N; i++)
	{
		min = i; 
		for (j = i+1; j<= N; j++)
			if (a[j] < a[min]) 
				min = j; 
		t = a[min]; 
		a[min] = a[i]; 
		a[i] = t; 
	}
}
