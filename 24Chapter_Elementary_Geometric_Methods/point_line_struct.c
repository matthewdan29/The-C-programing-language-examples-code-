#include <stdio.h>
#include <stdlib.h>

/* To work with geometric objects, one nedd to decide how to rep them. 
 * Ususally we use an array representation for polygons, thought a linked list 
 * or som other representation can be used when approprate. Most of these programs will use the straightforward representations. */

struct point
{
	int x; 
	int y; 
	char c; 
}; 
struct line
{
	struct point p1; 
	struct point p2; 
}; 
struct point polygon[Nmax]; 
/* all points are restricted to have integer corrdintes. you can mod it for floating point representation could be used. */
