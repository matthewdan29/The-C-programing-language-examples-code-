#include <stdlib.h>
#include <stdio.h>

/* This program produces the following output for the directed graph. visit().*/

/* int visit(int k)
 * {
 *	struct node *t; 
 *	val[k] = ++id; 
 *	for (t = adj[k]; t != z; t = t->next)
 *		if (val[t->v] == 0)
 *			visit(t->v); 
 * }*/

int visit(int k)
{
	struct node *j; 
	val[k] = ++id; 
	for (k = 1; k <= V; k++)
	{
		id = 0; 
		for (j = 1; j <= V; j++)
			val[j] = 0; 
		visit(k); 
		printf("\n"); 
	}
 }
