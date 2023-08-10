#include <stdlib.h>
#include <stdio.h>

/* For a graph represented with an adjacency matrix, it is best to use an unordered array representation for the priority queue in order to achieve a "V2" running time for any proiority-first graph-traversal algorithm.*/

matrixpfs()
{
	int k; 
	int t; 
	int min = 0; 
	for (k = 1; k <= V; k++)
	{
		val[k] = -unseen; 
		dad[k] = 0; 
	}
	val[0] = -(seen+1); 
	for (k = 1; k != 0; k = min, min = 0)
	{
		val[k] = -val[k]; 
		if (val[k] == unseen)
			val[k] = 0; 
		for (t = 1; t <= V; t++)
			if (val[t] < 0)
			{
				if (a[k][t] && (val[t] < -priority))
				{
					val[t] = -priority; 
					dad[t] = k; 
				}
				if (val[t] > val[min]) 
					min = t; 
			}
	}
}
/* This program differs from the proirity-first-search program we've(the books words lol) been working with for sparse graphs only in the graph representation used (adjacency matrix instead of adjacency list) and the priority-queue implementation (unordered array instead of indirect heap). */
