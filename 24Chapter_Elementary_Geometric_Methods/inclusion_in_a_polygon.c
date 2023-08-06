#include <stdio.h>
#include <stdlib.h>

/* given a point and polygon represented as an array of points, determin whether the point is inside or outside the polygon. */

/* This program uses a horizontal test line for ease of calculation */

int inside(struct point t, struct point p[], int N)
{
	int i; 
	int count = 0; 
	int j = 0; 
	struct line lt; 
	struct line lp; 
	p[0] = p[N]; 
	p[N+1] = p[1]; 
	lt.p1 = t; 
	lt.p2 = t; 
	lt.p2.x = INT_MAX; 
	for (i =1; i <= N; i++)
	{
		lp.p1 = p[i]; 
		lp.p2 = p[i]; 
		if (!intersect(lp, lt))
		{
			lp.p2 = p[j]; 
			j = i; 
			if (intersect(lp, lt))
				count++;
		}
	}
	return count & 1; 
}
