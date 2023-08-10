#include <stdio.h>
#include <stdlib.h>

/* "pqconstruct()" and "pqremove()" are used to keep the priority queue structure is maintained. 
 * By now you must understand think of the operations on a abstract data structures 
 * The program below simply calls the procedure "edgefound()" for each edge in the spanning tree; with slightly more work a "dad[]" or other representation could be computed. */

#define maxV 50
#define maxE 2500
struct edge
{
	char v1; 
	char v2; 
	int w; 
}; 
int i; 
int j; 
int m; 
int V; 
int E; 
struct edge e[maxE]; 
kruskal()
{
	scanf("%d %d\n", &V, &E); 
	for ( j = 1; j <= E; j++)
	{
		scanf("%c %c %d\n", &e[j].1, &e[j].v2, &e[j].w); 
	}
	findinit(); 
	for (pqconstruct(), i = 0; pqempty != 0)
	{
		m = pqremove(); 
		if (find(index(e[m].v1), index[e[m].v2], 1))
		{
			edgefound(e[m]v1, e[m].v2); 
			i++; 
		}; 
		if (i == V-1) 
			break; 
	}
}

/* You can run into a problem where you cant make a spanning tree when the graph is not connected. */

/* Rather than using priority queues, one could simply sort the edges by weight
 * initially, then process them in order. The cycle test can be done in time close to E log E with a much simpler stragtegy than union-find, to give a minimum spanning tree algorithm that always take E log E steps. This is the method proposed by Kruskal, but the one in the book uses "uion-find()" and "pqueues()" structures as "Kurskal's algorithm". */
