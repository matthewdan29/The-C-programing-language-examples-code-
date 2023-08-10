#include <stdlib.h>
#include <stdio.h>

/* Strongly connected component: The property that all nodes within a component are mutully accessible, but there is no way to get from a nonde in one component to a node in another component and back. This method was discovered by
 * R. E. Tarjan in 1972. */
/* This method is based on the depth-first search. */
/* The recursive "visit()" function give below uses the same "min" computation to find vertex 'k', but uses the value of "min" different way. */

int val[maxV]; 
int id = 0; 
int visit(int k)
{
	struct node *t; 
	int m; 
	int min; 
	int val[k] = ++id; 
	int min = id; 
	stack[p++] = k; 
	for (t = adj[k]; t != z; t = t->next)
	{/* look at this logic it decides to fibb or access the v in struct */
		m = (!val[t->v]) ? visit(t->v) : val[t->v]; 
		if (m < min)
			min = m; 
	}

	if (min == val[k])
	{
		while (stack[p] != k)
		{
			printf("%c", name(stack[--p])); 
			val[stack[p]] = V + 1; 
		}
		printf("\n"); 
	}
	return min; 
}

/* This program pushes the vertex names onto a stack on entry to "visit", then pops them and prints them on exit from visiting the last member of each strongly connected component. The point of the computation is the test wether "min" and "val[k]" are equal. it so all vertices emcountered since entry belong to the same strongly connected component as 'k'. As usual, this program can easily be modified to do more sophisticated processing than simply writing out the components.*/
