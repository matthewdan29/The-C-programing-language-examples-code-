#include <stdlib.h>
#include <stdio.h>

/* This tree makes sure your data structure is running in best case which */
/* A bit field is added to rep the red and black links to the nodes */

rbtreeinsert(int v, int info)
{
	x = head; 
	p = head; 
	g = head; 
	while (x != z)
	{
		gg = g; 
		g = p; 
		p = x; 
		x = (v < x->key) ? x->l : x->r;  
		if (x->l->red && x->r->red) 
			split(v); 
	}
	x = (struct node *) malloc(sizeof *x); 
	x->key = v; 
	x->info = info; 
	x->l = z; 
	x->r = z; 
	if (x < p->key) 
		p->l = x; 
	else
		p->r = x; 
	split(v); 
}

/* In this program, 'x' moves down the tree as before and 'gg', 'g', and 'p'
 * are kept pointing to 'x''s great-grandparent, grandparent, and parent in the
 * tree.  */
