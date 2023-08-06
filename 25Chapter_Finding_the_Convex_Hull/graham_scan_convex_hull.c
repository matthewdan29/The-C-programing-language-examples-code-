#include <stdlib.h>
#include <stdio.h>

/* implementation: 
 * First, The point with the maximum 'x' value amoung all points with minimum 'y' value is exchanged with "p[1]". Next, "shellsort" is used to rearrange the points, modified as necessary to compare two points using their "theta" values with "p[1]". After the sort, "p[N]" is copied into "p[0]" to serve as a sentinel in case "p[3]" is not on the hull. Finally, the scan described above is performed. The following program finds the convex hull of the point set "p[1],...,p[N]" */
/* That was a lot to explain. If your not going to be a develper in ML using a lot of activation functions or just doing simple programing I might not need to learn this complex algo. Unlike me I'm going to need to use this soon */

int grahamscan(struct point p[], int N)
{
	int i; 
	int min; 
	int M; 
	struct point t; 
	for (min = 1, i = 2; i <= N; i++)
		if (p[i].y < p[min].y)
			min = i; 
	for (i =1; i <= N; i++)
		if (p[i].y == p[min].y)
			if (p[i].x > p[min].x)
				min = i; 
	t = p[1]; 
	p[1] = p[min]; 
	p[min] = t; 
	shellsort(p,N);		/* This is where most of the work at */
	p[0] = p[N]; 
	for (M = 3, i = 4; i <= N; i++)
	{
		while (ccw(p[M], p[M-1], p[i]) >= 0)
			M--; 
		M++; 
		t = p[M]; 
		p[M] = p[i]; 
		p[i] = t; 
	}
	return M; 
}

/* The loop maintains a partial hull in "p[1], ... ,p[M]"
 * as described. For each new 'i' value considered, 'M' is decremented if necessary to eliminate points from the partial hull and then "p[i]" i sexchanged with "p[M+1]" to add it to the partial hull. */
