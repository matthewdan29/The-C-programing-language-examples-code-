#include <stdlib.h>
#include <stdio.h>

/* finding a minimum spanning tree is finding a path from J[i, ... , i-1] nodes  with the edges holding data such as cost or distance. */ 

visit(int k)
{
	struct node *t; 
	if (pqupdate(k, unseen) != 0)
		dad[k] = 0; 
	while (!pqempty())
	{
		id++; 
		k = pqremove(); 
		val[k] = -val[k]; 
		if (val[k] == unseen)
			val[k] = 0; 
		for (t = adj[k]; t != z; t = t-next)
			if (val[t->v] <0)
				/* if (pqupdate(t->v, V - id))
				 * {
				 *	val[t-v,] = (V - id); (val[k/2]) 
				 *	dad[t->v] = k; 
				 * }*/
				if (pqupdate(t->v, priority)) /*(V - id) */
				{
					val[t->v] = -(priority); /*(V - id)*/
					dad[t->v] = k;	
				}
	}
}

listpfs()
{
	int k; 
	pqinitialize(); 
	for (k = 1; k <= V; k++)
		val[k] = -unseen; 
	for (k = 1; k <= V; k++)
		if (val[k] == -unseen)
			visit(k); 
}
