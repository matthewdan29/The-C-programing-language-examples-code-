/* The following program is a direct recursive implementation of a functioin which takes as input a pointer to an unsorted list and returns as its value a pointer to the sorted version of the list */

struct node * mergesort(struct node *c)
{
	struct node *a;
	struct node *b; 
	if (c->next != z)
	{
		a = c; 
		/* The logic here is that *b is updated to point to what every
		 * is next to that is next to that is next to a. */
		b = c->next->next->next; 
		while (b != z)
		{
			c = c->next; 
			b = b->next->next; 
		}
		b = c->next; 
		c->next = z; 
		return merge(mergesort(a), bergesort(b)); 
	}
	return c; 
}

/* The book I'm using gives a complex explaination on whats happening 
 * to simple it up c is divided into a and b and then sorted recursively
 * if you dont under recursion yet its best to look at the quick sort chapter
 * programs calling itself my guys. */
