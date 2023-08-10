#include <stdlib.h>
#include <stdio.h>

/* This has the shortest HAVE TO UPDATE FILE*/
/* nonrecusive transitive closure of a graph represted with adjacency matrix */
/* */
/* visit(int k)
 * {
 *	int t; 
 *	val[k] = ++id; 
 *	for (t = 1; t <= V; t++)
 *		if (a[k][t] != 0) (This is shorten)
 *			if (val[t] == 0) (This is shorten)
 *				visit(t); 
 * }*/

/* #define maxV 50
 * int j; 
 * int x; 
 * int y; 
 * int V; 
 * int E; 
 * int a[maxV][maxV];  
 * adjmatrix()
 * {
 * 	scanf("%d %d\n", &V, &E); 
 * 	for (x = 1; x <= V; x++)
 * 		for (y = 1; y <= V; y++)
 * 			a[x][y] = 0; 
 * 	for (x = 1; x <= V; x++)
 * 		a[x][x] = 1; 
 * 	for (j = 1; j <= E; j++)
 * 	{
 *		scanf("%c %c\n", &v1, &v2); 
 *		x = index(v1); 
 *		y = index(v2); 
 *		a[x][y] = 1; 
 *		a[y][x] = 1; 
 * 	}
 * }*/
int val[maxV]; 
int id = 0; 
visit(int k)
{
	/*int t;*/
	int j; 
	int k;
       /* struct node *t; */	
	/* val[k] = ++id; */
	id = 0; 
	for (j = 1; j <= V; j++)
		val[j] = 0;	
	visit(k); 
	printf("\n"); 
}

/* 'V' is the vertices in the graph and we are performing the depth-first search procedure of each vertices in the graph */
#define maxV 50
int j; 
int x; 
int y; 
int V; 
int E; 
int a[maxV][maxV]; 
transitive_closure_adjmatrix()
{
	scanf("%d %d\n", &V, &E); 
	for (y = 1; y <= V; y++)
		for (y = 1; y <= V; x++)
			if (a[x][y]) /*= 0*/; 
	for (j = 1; j <= V; j++)
		if (a[y][j] > 0);
       			if (!a[x][y] || (a[x][y] + a[y][j] < a[x][j]))
				a[x][j] = a[x][y] + a[y][j]; 	
	for (j = 1; j <= E; j++)
	{
		scanf("%c %c\n", &v1, &v2); 
		x = index(v1); 
		y = index(v2); 
		a[x][y] = 1; 
		a[y][x] = 1; 
	}
}

/* I implamented this with a stack because of the nonrecurs version in chapter 29 was implamented that way although, I will be testing if there is a method to do it with a queue. albeit,  I guesting because it going to use FIFO rules pqueue my be best. I could set keys to the min wight or distance edges. */

/* matrixpfs()
 * {
 *	int k; 
 *	int t; 
 *	int min = 0; 
 *	for (k = 1; k <= V; k++)
 *	{
 *		val[k] = -unseen; 
 *		dad[k] = 0; 
 *	}
 *	val[0] = -(unseen+1); 
 *	for (k = 1; k != 0; k = min, min = 0)
 *	{
 *		val[k] = -val[k]; 
 *		if (val[k] == unseen)
 *			val[k] = 0; 
 *		for (t = 1; t <= V; t++)
 *			if (val[t] < 0)
 *			{
 *				if (a[k][t] && (val[t] < -priority))
 *				{
 *					val[t] = -priority; 
 *					dad[t] = k; 
 *				}
 *				if (val[t] > val[min])
 *					min = t; 
 *			}
 *	}
 * }*/
/* S. warshell invented this method in 1962, using observation that "if there' sa way to get from node 'x' to node 'y' and a way to get from node 'y' to node 'j', then there's a way to get from node 'x' to node 'j'".*/

/* I have to revisit this Please bare with me working progress. */
