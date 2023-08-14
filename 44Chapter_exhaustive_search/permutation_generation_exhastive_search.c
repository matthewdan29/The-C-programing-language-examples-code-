#include <stdlib.h>
#include <stdio.h>

/* We get all permutations by keeping the vertices labeled in the order they appear on the search path and printing out all the vertex labels every time we have a path of length 'V'. */

visit(int k)
{
	int t; 
	val[k] = ++id; 
	if (id == V)
		writeperm(); 
	for (t = 1; t <= V; t++)
		if (val[t] == 0)
			visit(t); 
	id--; 
	val[k] = 0; 
}
/* The procedure "writeperm()" simply writes out the entries of the "val[]". This is done by time "id=V", corresponding to the discovery of a complete path in the graph. To print out all permutations of the integers 1,2, 3, ... 'N', we invoke this procedure with the call "visit(0)" with "id" initialized to "-1" and the "val[]" initialized to zero. This corresponds to introducing a dummy node to the complete graph, and checking all paths in the graph starting with node 0. When invoked in this way for "N=4". */

/*writeperm()
 * {
 * 	int id; 
 * 	int k; 
 *	int val[]; (i'm asumming that id is at index V so I can just print it)
 *	printf("%d %d\n", val[id], k);
 *	printf("%d\n", id ) (covering my but "I will be coming back to this do to how important backtracking for training networks. ")
 * }*/


