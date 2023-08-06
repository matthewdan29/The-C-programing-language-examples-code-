#include <stdlib.h>
#include <stdio.h>

/* This tree node traversal is called level-order 
 * because it visits every level in the tree as it appers 
 * basicly your using a FIFO queue in stead of a stack that used in pre order */

travese(struct node *t)
{
	put(t); 
	while (!queuempty())
	{
		t = get(); 
		visit(t); 
		if (t->l != z)
			put(t->l); 
		if (t->r != z)
			put(t->r); 
	}
}
