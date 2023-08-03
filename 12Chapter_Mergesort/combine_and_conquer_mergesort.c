/* This is a implementation of the bottom-up approach, using linked list */

struct node *mergesort(struct node *c)
{
	int i; 
	int N; 
	struct node *a; 
	struct node *b; 
	struct node *head; 
	struct node *todo; 
	struct node *t; 
	/* creating the head node */
	head = (struct node *) malloc(sizeof *head); 
	/* pointing the head node to what ever 'c' is pointed to */
	head->next = c; 
	a = z; 
	for (N = 1; a != head->next; N = N+N)
	{
		todo = head->next; 
		c = head; 
		while (todo != z)
		{
			t = todo; 
			a = t; 
			for (i = 1; i < N; i++)
				t = t->next; 
			b = t->next; 
			t->next = z; 
			t = b; 
			for (i = 1; i < N; i++)
				t = t->next; 
			todo = t->next; 
			t->next = z; 
			c->next = merge(a, b); 
			for (i = 1; i <= N+N; i++)
				c = c->next; 
		}
	}
	return head->next; 
}

/* This program uses a "list-header" node(pointed to by head) whose
 * link field points to the file being sorted. */

/* The inner (while) loop merges the two subfiles of length 'N' starting at the node pointed to by "todo",
 * producing a subfie of length "N+N" which is linked into a 'c' result list. */
