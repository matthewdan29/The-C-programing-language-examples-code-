#include <stdlib.h>
#include <stdio.h>

/* hash function with linked list searching method */

static struct node 
{
	char *key; 
	int info; 
	struct node *next; 
};
static struct node *heads[M]; 
static struct node *z; 

hashlistinitialize()
{
	int i; 
	z = (struct node *) malloc(sizeof *z); 
	z->next = z; 
	z->info = -1; 
	for (i = 0; i < M; i++)
	{
		heads[i] = (struct node *) malloc(sizeof *z); 
		heads[i]->next = z; 
	}
}

/* This method is traditionally called "separate chaining" because colliding 
 * records are "chained" together in separate linked lists. It's kept in sorted order. */
