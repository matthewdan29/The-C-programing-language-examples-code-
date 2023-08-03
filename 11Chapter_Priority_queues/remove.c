#include <stdio.h>
#include <stdlib.h>

int remove()
{
	int v = a[1]; 
	a[1] = a[N--]; 
	downheap(1); 
	return v; 
}

/* The return value is set from 'a[1]' and then the element from 'a[N]' is 
 * put into 'a[1] and the size of the heap decremented, leaving only a call down heap to fix up the heap condition everywhere. '*/
