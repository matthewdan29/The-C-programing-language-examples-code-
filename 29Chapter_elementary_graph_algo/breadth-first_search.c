#include <stdlib.h>
#include <stdio.h>

/* breadth-first search completely covers the area close to the starting point, moving farther away only when everything close has been looked at.*/
/* instead of using a stack use a queue to traversal the stack that gives the a direct path from vertex node 't' to vertex node 'v' in level order. */

int val[maxV]; 
int id = 0; 
visit(int k)
{
	struct node *t; 
	put(k); 
	while (!queueempty())
	{
		k = get(); 
		val[k] = ++id; 
		for (t = adj[k]; t != z; t = t->next)
			if (val[t->v] == 0)
			{
				put(t->v); 
				val[t->v] = -1; 
			}
	}
}

listbfs()
{
	int k; 
	queueint(); 
	for (k = 1; k <= V; k++)
		val[k] = 0; 
	for (k = 1; k <= V; k++)
		if (val[k] == 0)
			visit(k); 
}
/* Changing the data structure in this way affects the order in which the nodes are visited. */
