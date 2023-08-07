#include <stdlib.h>
#include <stdio.h>

/* like tree nonrecursive its just implamented with a stack */

int val[maxV]; 
int id = 0; 
visit(int k)
{
	struct node *t; 
	push(k); 
	while (!stackempty())
		k = pop(); 
	val[k] = ++id; 
	for (t = adj[k]; t != z; t = t->next)
		if (val[t->v] == 0)
		{
			push(t->v); 
			val[t->v] = -1; 
		}
}

listdfs()
{
	int k; 
	stackinit(); 
	for (k = 1; k <= V; k++)
		val[k] = 0; 
	for (k = 1; k <= V; k++)
		if (val[k] == 0)
			visit(k); 
}

/* Vertices that have been touched but not yet visited are kept on a stack */


