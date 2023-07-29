#include <stdio.h>
#include <stdlib.h>

#define max 1000

int key[max+2], next[max+2]; 
int x, head, z; 

listinitialize()
{
	head = 0; 
	z = 1; 
	x = 2; 
	next[head] = z; 
	next[z] = z; 
}

deletenext(int t)
{
	next[t] = next[next[t]]; 
}

int insertafter(int v, int t)
{
	key[x] = v; 
	next[x] = next[t]; 
	next[t] = x; 
	return x++; 
}

/* Each call on the storage allocation function "malloc()" is replaced by simply increamenting the "pointer" x: it keeps track of the next unused postion in the array */
