#include <stdlib.h>
#include <stdio.h>

/* just like binary tree search buy your just comparing bits */
int digitalsearch(int v)
{
	struct node *x = head; 
	int b = maxb; 
	z->key = v; 
	while (v != x->key)
		x = (bits(v, b--,l)) ? x->r : x->l ; 
	return x->info; 
}

/* The data structures for this program are the same as those that is used 
 * for elementary binary search trees.*/

/* The insert procedure for digital search trees also derives directly from 
 * binary search trees. */

digitalinsert(int v, int info)
{
	struct node *p; 
	struct node *x = head; 
	int b = maxb; 
	while(x != z)
	{
		p = x; 
		x = (bits(v, b--, l)) ? x->r : x->l; 
	}
	x = (struct node *) malloc(sizeof *x); 
	x->key = v; 
	x->info = info; 
	x->l = z; 
	x->r = z; 
}
