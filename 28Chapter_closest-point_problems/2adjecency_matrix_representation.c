#include <stdlib.h>
#include <stdio.h>

/* adjacency-structure representation for a less dense graph */
/* The artifical nodes for the beginning of the lists are kept in an array "adj" index by vertex. */

#define maxV 1000
struct node 
{
	int v; 
	struct node *next; 
}; 
int j; 
int x; 
int y; 
int V; 
int E; 
struct node *t; 
struct node *z; 
struct node *adj[maxV]; 
adjlist()
{
	scanf("%d, %d\n", &V, &E); 
	z = (struct node *) malloc(sizeof *z); 
	z->next = z; 
	for (j = 1; j <= V; j++)
		adj[j] = z; 
	for (j = 1; j <= E; j++)
	{
		scanf("%c %c\n", &v1, &v2);
		x = index(v1); 
		y = index(v2); 
		t = (struct node *) malloc(sizeof *t); 
		t->v = x; 
		t->next = adj[y]; 
		adj[y] = t; 
		t = (struct node *) malloc(sizeof *t); 
		t->v = y; 
		t->next = adj[x]; 
		adj[x] = t; 
	}
}
