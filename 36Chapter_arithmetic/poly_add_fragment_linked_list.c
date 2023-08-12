#include <stdio.h>
#include <stdlib.h>

/* This is a representation of polynomials using linked list and add them */

struct node *add(struct node *p, struct node *q)
{
	struct node *t; 
	t = z; 
	z->c = 0; 
	while ((p != z) && (q != z))
	{
		t->next = (struct node *) malloc(sizeof *t); 
		t = t->next; 
		t->c = p->c + q->c; 
		p = p->next; 
		q = q->next; 
	}
	t->next = z; 
	t = z->next; 
	z->next = z; 
	return t; 
}

/* The input polynomials are represented by linked list with one list element per coefficient; 
 * the output polynomial is built by the "add" procedure. check the 3, 8, 14, 29 dir. */
