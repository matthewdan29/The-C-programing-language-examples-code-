#include <stdlib.h>
#include <stdio.h>

struct node *rotate(int v, struct node *y)
{
	/* creating pointers */
	struct node *c; 
	struct node *gc; 
	/* if the node pointing to y key is smaller 
	 * which would make the statement true c = the left node (smaller)
	 * if the statement is false c = the right node (bigger) */
	c = (v < y->key) ? y->l : y->r; 
	if (v < c->key)
	{
		gc = c->l; 
		c->l = gc->r; 
		gc->r = c; 
	}
	else 
	{
		gc = c->r;
		c->r = gc->l; 
		gc->l = c; 
	}
	if (v < y->key) 
		y->l = gc; 
	else 
		y->r = gc; 
	return gc; 
}
