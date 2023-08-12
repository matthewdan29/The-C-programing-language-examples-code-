/* We can make list nodes represent only the non zero terms of the polynomial by also inlcuding the degree of the term represented with the list node, so that each list node contains values of 'c' and 'j' to represent "cx^j". it is then convenient to separate out the function of creating a node and adding it to a list.*/

struct node 
{
	int c; 
	int j; 
	struct node *next; 
}; 

struct node *insert(struct node *t, int c, int j)
{
	t->next = (struct node *) malloc(sizeof *t); 
	t = t->next; 
	t->c = c; 
	t->j = j; 
	return t; 
}
