#include <stdlib.h>
#include <stdio.h>

/* binary search implemn for a tree struct */

static struct node
{
	int key; 
	int info; 
	struct node *l; 
	struct node *r; 
}; 
static struct node *t; 
static struct node *head;
static struct node *z; 

int treesearch(int v)
{
	struct node *x = head->r; 
	z->key = v; 
	while (v != x->key)
		while (v != x->key)
			/* remember if statment true left if not right */
			x = (v < x->key) ? x->l : x->r; 
	return x->info; 
}

/* make the "head" node point to the root by making it impossiable for anyother node to be small meaning the right link to the "head" node is the root and "head" left node it empty no sub tree with less address */

/* The empty tree is represented by having the right link of "head" point to 'z'*/

treeinitialize()
{
	z = (struct node *) malloc(sizeof *z); 
	z->l = z; 
	z->r = z; 
	z->info = -1; 
	head = (struct node *) malloc(sizeof *head); 
	head->r = z; 
	head->key = 0; 
}


/* To insert a node into the tree, 
 * one must do an unsuccessful search for it
 * then attach it in place of 'z' at the point at which the search terminated.*/

treeinsert(int v, int info)
{
	struct node *p; 
	struct node *x; 
	p = head; 
	x = head->r; 
	while (x != z)
	{
		p = x; 
		x = (v < x->key) ? x->l : x->r;
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
}

/* "treeprint()" will print out the keys of the tree in order. 
 * this defines a sorting method which is similart to "Quicksort()" 
 * root plays a part in partitioning*/

treeprint()
{
	treeprintr(head->r); 
}

treeprintr(struct node *x)
{
	if (x != z)
	{
		treeprintr(x->l); 
		printnode(x);
		treeprintr(x->r); 
	}
}

/* The variable 'p' is used to keep track of the parent of 'x' in the tree and the variable 'c' is used to find the successor node of the node to be deleted.
 * After 'x' is the child of 'p'. */

treedelete(int v)
{
	struct node *c; 
	struct node *p; 
	struct node *x; 
	z-key = v; 
	p = head; 
	x = head->r; 
	while (v != x->key)
	{
		p = x; 
		x = (v < x->key) ? x->l : x->r; 
	}
	t = x; 
	if (t->r == z)
		x = x->l; 
	else if 
		(t->r->l == z)
		{
			x = x->r; 
			x->l = t->l; 
		}
	else 		/* DONT BE SCARED OF THE COMPLEX CODE*/
	{		/* Its just updating all the pointers to node 'v' 
			  so that nothing isnt pointed to it and that 
			  'v' isnt pointed to anything 
			   this makes sure you can find a element 
			   that was ment to be deleted in mem 
			   making your code mem safe. */
		c = x->r; 
		while (c->l->l != z)
			c = c->l; 
		x = c->l; 
		c->l =x->r; 
		x->l = t->l; 
		x->r = t->r; 
	}
	free(t);	/* freeing the memory space of t */
	if (v < p->key)
		p->l = x; 
	else 
		p->r = x; 
}
