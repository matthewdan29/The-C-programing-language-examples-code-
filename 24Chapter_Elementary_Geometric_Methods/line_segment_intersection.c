#include <stdlib.h>
#include <stdio.h>

/* consider determining whether or not two given line segments intersect.*/
/* this method provides a way to compute if 2 lines intersect */

int ccw(struct point p0, struct point p1, struct point p2)
{
	int dx1; 
	int dx2; 
	int dy1; 
	int dy2; 
	dx1 = p1.x - p0.x; 
	dy1 = p1.y - p0.y; 
	if (dx1*dy2) > dy1*dx2
		return +1; 
	if (dx1*dy2 < dy1*dx2)
		return -1; 
	if ((dx1*dx2 < 0) || (dy1*dy2 < 0))
		return -1; 
	if ((dx1*dx1+dy1) < (dx2*dx2+dy2*dy1))
		return +1; 
	return 0; 
}
/* you can make sure the slopes are alway positive by using the mathamtical rule of mulitiplication and a inverse property (-1*-1=1 just make a check to see if one of your slope is x < 0 then * x by -1)*/

int intersect(struct line l1, struct line l2)
{
	return ((ccw(l1.p1, l1.p2, l2.p1) *ccw(l1.p1, l1.p2, l2.p2)) <= 0) && ((ccw(l2.p1, l2.p2, l1.p1) *ccw(l2.p1, l2.p2, l1.p2)) <= 0); 
}

/**/
