#include <stdio.h>
#include <stdlib.h>

/* This procedure recursively determines the highest point in the tree reachable  from any descendant of vertex 'k', and uses this infomation to determine if 'k' is a articulation point. Meaning it's a cut off path for the connected graph meaning that the graph is not biconnected */

int visit(int k)
{
	struct node *t; 
	int m; 
	int min; 
	val[k] = ++id; 
	min = id; 
	for (t = adj[k]; t != z; t = t->next)
		if (val[t->v] == 0)
		{
			m = visit(t->v); 
			if ( m < min)
				min = m; 
			if (m >= val[k])
				printf("%c", name(k)); 
		}
		else if (val[t->v] < min)
			min = val[t->v]; 
	return min; 
}
