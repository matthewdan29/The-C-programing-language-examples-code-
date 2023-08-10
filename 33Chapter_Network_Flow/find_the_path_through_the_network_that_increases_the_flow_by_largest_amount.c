#include <stdio.h>
#include <stdlib.h>

/* This method was founded by Jack Edmons and Richard Karp in 1972 */
/* 
 * priority = -flow[k][t];
 * if (size[k][t] > 0)
 * 	priority += size[k][t]; 
 * 	if (priority > val[k])
 * 		priority = val[k]; 
 * */
/* The same method can be applied to graphs represented with adjacency matrices by using this "vist()"
 * visit(int k)
 * {
 *	int t; 
 *	val[k] = ++id; 
 *	for (t = 1; t <= V; t++)
 *		if (a[k][t] != 0)
 *			if (val[t] == 0)
 *				visit(t); 
 * }*/
priority graph traversal method 

/* I will be working on this to implament */
visit(int k)
{
	int t; 
	int flow[k][t]; 
	priority = -flow[k][t]; 
	if (size[k][t] > 0)
		priority += size[k][t]; 
	if (priority > val[k])
		priority = val[k];
}/* page 470 */


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
	val[0] = -(unseen+1); 
	for (k = 1; k != 0; k = min, min = 0)
	{
		val[k] = -val[k]; 
		if (val[k] == unseen)
			val[k] = 0; 
		for (t = 1; t <= V; t++)
			if (val[t] < 0)
			{
				if (a[k][t] && (val[t] < -proirity)) 
				{
					val[t] = -priority; 
					dad[t] = k; 
				}
				if (val[t] > val[min])
					min = t;
			}
	}
}


/* this program assumes below an adjacency-matrix representation is used for the network. */

/* 
 * for(;;)
 * {
 *	if (!marixpfs(1,V))
 *		break; 
 *	y = V; 
 *	x = dad[v]; 
 *	while (x != 0)
 *	{
 *		flow[x][y] = flow[x][y] + val[V]; 
 *		flow[y][x] = -flow[x][y]; 
 *		y = x; 
 *		x = dad[y]; 
 *	}
 * }*/

/* As long as "matrixpfs" can find a path that increases the flow, we trace back through the pah and increase the flow as indicated. If 'V' remains unseen after some call to matrixpfs, then a mincut has been found and the algorithm terminates. */
