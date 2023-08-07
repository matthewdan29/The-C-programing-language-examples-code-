#include <stdlib.h>
#include <stdio.h>

/* Is a natural way to "visit" every node and check every edge in the graph systematically. */

/* start with a program for graphs represented with adjacency lists */

int val[maxV]; 
int id = 0; 
visit(int k)
{
	struct node *t; 
	val[k] = ++id; 
	for (t = adj[k]; t != z; t = t->next)
		if (val[t->v] == 0)
			visit(t->v); 
}

listdfs()
{
	int k; 
	for (k = 1; k <= V; k++) 
		val[k] = 0; 
	for (k = 1; k <= V; k++)
		if (val[k] == 0)
			visit(k); 
}
/* This program fills in an array "val[V]" as it visits every vertex of a graph. The array is initially set to all zeros, so "val[k] == 0" indicates that vertext 'k' has not yet been visited. */
