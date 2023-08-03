listinsert(int v, int info)
{
	struct node *x; 
	struct node *t = head; 
	z->key = v; 
	while (v > t->next->key)
		t = t->next; 
	x = (struct node *) malloc(sizeof *x); 
	x->next = t->next; 
	t->next = x; 
	x->key = v; 
	x->info = info; 
}

/* temp buffers are place at the begining "head" and tail "z" allowing substantial simplification of code*/

/* worth noting sorted list implementation of sequential search uses about N/2 
 * comparisons for both successful and unsuccessful search (on n = X/(n/(1/n)) the average incase I got the notation wrong)*/
