#include <stdio.h>
#include <stdlib.h>

/* This method visits every node in a tree recusively */
/* visit the root, then visit the left subtree, then visit the right subtree */
/* dont run this by its self it need a strut and main() goofy */
traverse(struct node *t)
{
	push(t); 
	while(!stackempyt())
	{
		t = pop(); 
		visit(t); 
		if (t->r != z)
			push(t->r); 
		if (t->l != z)
			push(t->l); 
	}
}
