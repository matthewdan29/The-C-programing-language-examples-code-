struct node
{
	int key; 
	struct node *next;	/* pointer to the next node */
}; struct node *z; 

struct node *merge(struct node *a, struct node *b)
{
	struct node *c; 
	c = z; 
	do 
		if (a->key <= b->key)
		{
			c->next = a; 
			c = a; 
			a = a->next; 
		}
		else 
		{
			c->next = b; 
			c = b; 
			b = b->next; 
		}
	while (c != z); 
	c = z->next; 
	z->next = z; 
	return c; 
}

/* This program merges the list pointed to by 'a' with the list pointed to by
 * 'b' with the help of a temp pointer 'c'. 
 * Assume to have a dummy "tail" node. */
