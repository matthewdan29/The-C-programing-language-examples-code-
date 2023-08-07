#include <stdlib.h>
#include <stdio.h>

/* The same method can is applied to adjacency matrices. only if you did read the name on the file. */
visit(int k)
{
	int t; 
	val[k] = ++id; 
	for (t = 1; t <= V; t++)
		if (a[k][t] != 0)
			if (val[t] == 0)
				visit(t); 
}

/* Traveling through an adjacency list translates to scanning through a row in the adjacency matrix, looking for 1 values. As before, any edge to a vertex that hasn't been seen before is "followed" via a recursive call. */

/* A graph has a cycle if a nonzero "val" entry is discovered in "visit". 
 * If encountered an edge pointing to a vertext that already visited, then you have a cycle. Equivalently, all the dotted links in the dpth-first search trees belong to cycles. */
