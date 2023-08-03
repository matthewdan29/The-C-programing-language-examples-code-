#include <stdlib.h>
#include <stdio.h>

/* your just updating the pointers of the object you want to be it's childern to look at it. but your in a array so you must think every 3 (if your counting the siblings on the same row as the root of such subtree) */

int replace(int v)
{
	a[0] = v;
	downheap(0); 
	return a[0]; 
}

/* 'a[0]' in an artificial way: its children are 0 (itself) and 1,
 * so if 'v' is larger than the largest element in the heap, the heap is not touched;
 * otherwise 'v' is put into the heap and 'a[1]' is returned.*/
