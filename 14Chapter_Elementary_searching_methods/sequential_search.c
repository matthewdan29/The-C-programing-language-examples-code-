#include <stdlib.h>
#include <stdio.h>

/* Think of a FIFO queue it inserts from the back so you can look at it as not caring if the data is stored in order 
 * This is good for a non rational DB. */

static struct node
{
	int key; 
	int info; 
};

static struct node a[maxN+1]; 
static int N; 
sequinitialize()
{
	N = 0; 
}

int seqsearch(int v)
{
	int x = N+1; 
	a[0].key = v; 
	a[0].info = -1; 
	while (v != a[--x].key); 
	return a[x].info; 
}

seqinsert(int v, int info)
{
	a[++N].key = v; 
	a[N].info = info; 
}

/* This is an implementation supporting an abstract data type where integer keys(key) are use to store and recall "associated information" (info).  */

/* Changing "int key" to "char *key" in the declaration of "node", "int v" to "char *v" in both arguments declarations, and "v != a[--x].key" to age that uses character strings instead of integers as keys.*/

/* Or "info" could be a pointer to a complicated record structure. */
