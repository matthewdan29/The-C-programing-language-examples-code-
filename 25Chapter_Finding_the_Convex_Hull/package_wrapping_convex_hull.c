#include <stdlib.h>
#include <stdio.h>

/* The following program finds the concex hull of an array 'p' of 'N' points. 
 * The basis for this implementation is the function theta.*/

float theta(struct point p1, struct point p2); 
#define RAD 360
int wrap(struct point p[], int N)
{
	int i; 
	int min; 
	int M; 
	float th; 
	float v; 
	struct point t; 
	for (min = 0, i = 1; i < N; i++)
	{
		if (p[i].y < p[min].y)
			min = i; 
		p[N] = p[min]; 
		th = 0.0; 
		for (M = 0; M < N; M++)
		{
			t = p[M]; 
			p[M] = p[min]; 
			p[min] = t; 
			min = N; 
			v = th; 
			th = RAD; 
			for (i = M+1; i <= N; i++)
				if (theta(p[M], p[i]) > v)
					if (theta(p[M], p[i]) < th)
					{
						min = i; 
						th = theta(p[M], p[min]); 
					}
			if (min == N)
				return M; 
		}
	}
}

/* This program may or may not return points which fall on a convex hull edge.*/

/* The convex hull of a set of points in "k-dimensional" space is the minimal convex polytope containing them all, where a convx polytope is defined by the property that any line connecting two points inside must itself lie inside. 
 * For example, the convex hull of a set of points in 3-space is a convex three -dimensional object with flat faces. it can be found by "sweeping" a plane until the hull is hit, then "folding" faces of the plane, anchoring on different lines on the boundary of the hull, untill the "package" is "wrapped". 
 * IF YOU DONT UNDERSTAND THE IMPORTANCE I GET IT Just understand this algo is very important to data science. */
