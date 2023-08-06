#include <stdlib.h>
#include <stdio.h>

/* The following program returns a number between 0 and 360 that is not the angle made by p1 and p2 with the horizontal but whih has the same order properties as that angle. */

float theta(struct point p1, struct point p2)
{
	int dx; 
	int dy; 
	int ax; 
	int ay; 
	dx = p2.x - p1.x; 
	ax = abs(dx); 
	dy = p2.y - p1.y; 
	ay = abs(dy); 
	t = (ax+ay == 0) ? 0 : (float) dy/(ax+ay); 
	if (dx < 0)
		t = 2 -t; 
	else 
		if (dy < 0)
			t = 4 + t; 
	return t * 90.0; 
}
