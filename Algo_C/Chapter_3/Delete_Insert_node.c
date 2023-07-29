#include <stdio.h>
#include <stdlib.h>
struct node	/* "struct" declaration merely descibes the formats of the nodes*/
{ /* creating a node struct object */
	int key; 
	struct node *next; 	/* pointer to next node in the list*/
}; struct node *head, *z, *t; 

void listinitialize()
	/* creating the linked list with Head of list pointing to node Z */
{
	head = (struct node *) malloc(sizeof *head); /* Nodes can be created only when the built-in procedure "malloc()" is called */
	z = (struct node *) malloc(sizeof *z); 
	head->next = z; 
	z->next = z; 
}
/* delete node by having node before [k] node point to [k+2] node */
int deletenext(struct node *t)
{
	t->next = t->next->next; 
}

/* adding node just think of adding a link in a cuban link chain right after */
struct node *insertafter(int v, struct node *t)
{
	struct node *x; 
	x = (struct node *) malloc(sizeof *x); 
	x->key = v; 
	x->next = t->next;
	t->next = x; 
	return x; 
}

/* For example the reference "head->next->key" refers to the first item on a list
 * and "head->next->next-.key" refers to the second. */
