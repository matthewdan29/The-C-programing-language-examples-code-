#include <stdlib.h>
#include <stdio.h>

/* The array 'a' and it's size 'N' are referred to only by the priority queue functions and are supposed to be "hidden" from the calling routines. 
 * The array implementing an unordered list, construct, insert and remove are easily implemented as follows */

static int a[maxN+1], N; 
construct(int b[], int M)
{
	for (N = 1; N <= M; N++)
		a[N] = b[N]; 
}

insert(int v)
{
	a[++N] = v; 
}

int remove()
{
	int j; 
	int max; 
	int v; 
	max = 1; 
	for (j = 2; j <= N; j++)
		if (a[j] > a[max])
			max = j; 
	v = a[max]; 
	a[max] = a[N--]; 
	return v; 
}

/* The construct operaton is just an array copy, and to insert, we simply increment N and put the new item into a[N], a constant-time operation. but remove is linear */
