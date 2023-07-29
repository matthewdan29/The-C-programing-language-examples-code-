#include <stdlib.h>
#include <stdio.h>

static struct node 
{
	int key; 
	struct node *next; 
}; static struct node *head, *z, *t; 

/* creating the linked list with the struct "node" */
stackinit()
{
	head = (struct node *) malloc(sizeof *head); 
	z = (struct node *) malloc(sizeof *z); 
	head->next = z; 
	head->key = 0; 
	z->next = z; 
}

/* operation to insert a node "malloc()" into linked list top */
push(int v)
{
	t = (struct node *) malloc(sizeof *t); 
	t->key = v; 
	t->next = head->next; 
	head->next = t; 
}

/* removing node from the top of the linked list stack (free()) */
int pop()
{
	int x; 
	t = head->next; 
	head->next = t->next; 
	x = t->key; 
	free(t); 
	return x; 
}

/* check to see if the sack is empty */
int stackempty()
{
	return head->next == z; 
}
