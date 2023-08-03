/* This advantage is its easy to keep the list in sorted order */

static struct node 
{
	int key; 
	int info; 
	struct node *next; 
}; 
static struct node *head; 
static struct node *z; 

listinitialize()
{
	head = (struct node *) malloc(sizeof *head); 
	z = (struct node *) malloc(sizeof *z); 
	head->next = z; 
	z->next = z; 
	z->info = -1; 
}

int listsearch(int v)
{
	struct node *t = head; 
	z->key = v; 
	while (v > t->key)
		t = t->next; 
	return t->info; 
}

/* The while loop implementation given above interchange with 
 *  "for (z->key = v; v > t->key; t = t->next); " */
