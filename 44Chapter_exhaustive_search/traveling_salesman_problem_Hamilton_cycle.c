#include <stdio.h>
#include <stdlib.h>

/*Hamiltionian path was proven by Vaclac Chvatal and John Adrian Bondy in 1972.*/
/*"visit()" is meant to visit every node in the graph once in a restricted domain. This is a exhaustive search for such a path.*/

visit(int k)
{
	int t; 
	val[k] = ++id;  
	for (t = 1; t <= V; t++)
		if (a[k][t])
			if(val[t] == 0)
				visit(t); 
	id--; 
	val[k] = 0; 
}

/* Rather than marking every node it touches with a nonzero "val" entry, this procedure "cleans up after itself" and leaves "id" and the "val" array exactly as it found them. The only marked nodes are those for which "visit" hasn't completed, and these nodes correspond. exactly to a simple path of length "id" in the graph, from the initial node to the one currently being visited. To visit a node, we simply visit all unmarked adjacent nodes. The recursive procedure checks all simple procedure checks all simple paths in the graph that start at the initial node. */
