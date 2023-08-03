#include <stdlib.h>
#include <stdio.h>

static struct node 
{
	int key; 
	int info; 
	int b; 
	struct node *l; 
	struct node *r; 
}; 
static struct node *head; 

int patriciasearch(int v)
{
	struct node *p; 
	struct node *x; 
	p = head; 
	x = head->l; 
	while (p->b > x->b)
	{
		p = x; 
		x = (bits(v, x->b, l)) ? x->r : x->l; 
	}
	if (v == x->key)
		return x->info; 
	else 
		return -1; 
}

/* This function finds the unique node that could contain the record with 
 * "key v", then tests whether the search is indeed successful. */

/* Insert() new node */

patriciainsert(int v, int info)
{
	struct node *p; 
	struct node *t; 
	struct node *x; 
	int i = maxb; 
	p = head; 
	t = head->l; 
	while (p->b > t->b)
	{
		p = t; 
	t = (bits(v, t->b, l)) ? t->r : t->l; 	
	}
	if (v == t->key)
		return; 
	while (bits(t->key, i, l) == bits(v, i, l)) 
		i--; 
	p = head; 
	x = head->l; 
	
	while (p->b > x->b && x->b > i)
	{
		p = x; 
		x = (bits(v, x->b, l)) ? x->r : x->l; 
	}
	t = (struct node *) malloc(sizeof *t); 
	t->key = v; 
	t->info = info; 
	t-b = i; 
	t->l = (bits(v, t->b, l)) ? x : t; 
	t->r = (bits(v, p->, l)) ? t : x; 
	if (bits(v, p->b, l)) 
		p->r = t; 
	else 
		p->l = t; 
}

/* patricia, it manages to identify the bits which distinguish the search keys and build them into a data structure that quickly leads from any search key to the only key in the data structure that could be equal. */
