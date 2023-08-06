#include <stdlib.h>
#include <stdio.h>

/* The following code builds a parse tree for an arithmetic expression from a postfix input representation. */

struct node
{/* creating the node structure */
	char info; 
	struct node *l;
        struct node  *r; 		/* This is the ptr to the left and right child node of the structure */
}; struct node *x, *z; 

char c; 

/*This is a listinitialize() function */
/* void listinitialize()
 *{
 	struct node *z = (struct node *) malloc(sizeof *z);
	z->l = z; 
	z->r = z; 
  }*/

/* create the space for the node */
struct node *z = (struct node *) malloc(sizeof *z); 
z->l = z; 
z->r = z; 

for (stackinit(); scanf("%1s", &c) != EOF)
{
	x = (struct node *) malloc(sizeof *x); 
	x->info = c; 
	x->l = x; 
	x->r = z; 
	if (c == '+' || c == '*')
	{
		x->r = pop(); 
		x->l = pop(); 
	}
	push(x;)
}
