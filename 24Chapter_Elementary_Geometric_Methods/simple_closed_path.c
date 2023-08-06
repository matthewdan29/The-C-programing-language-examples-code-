#include <stdlib.h>
#include <stdio.h>

/* consider the problem of finding a path through a set of 'N' given points that doesn't intersect itself, visits all the points, and return to the point at which it started. */

/* The following program returns a number 0 to 360 that is not the angle made by p1 and p2 with the horizontal but which has the same order properties as that angle. */

float theta(struct point p1, struct point p2)
{
	int dx; 
	int dy; 
	int ax; 
	int ay; 
	float t; 
	dx = p2.x - p1.x; 
	ax = abs(dx); 
	dy = p2.y - p1.y; 
	ay = abs(dy); 
	t = (ax+ay == 0) ? 0 : (float) dy/(ax+ay); 
	if (dx < 0) 
		t = 2 - t; 
	else 
		if (dy < 0)
			t = 4 + t; 
	return t*90.0; 
}

/* In some programming environments it may not be worthwhile to use such programs instead of standard trigonomitric functions; in others it may lead to significant savings. */


