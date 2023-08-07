#include <stdlib.h>
#include <stdio.h>

buildytree()
{
	int t; 
	int x1; 
	int y1; 
	int x2; 
	int y2; 
	hy = bstinitialize(); 
	for (N = 1; ; N++)
	{
		t = scanf("%d %d %d %d", &x1, &y1, &x2, &y2); 
		if (t == EOF)
			break; 
		lines[N].p1.x = x1; 
		lines[N].p1.y = y1; 
		lines[N].p2.x = x2; 
		lines[N].p2.y = y2; 
		bstinsert(N, y1, hy); 
		if (y2 != y1)
			bestinsert(N, y2, hy); 
	}
}

/* This program reads in groups of four numbers that specify lines and puts them into "lines" array and into the binary search tree on the 'y' coordinate. */

/* its scanning here DM me if you want to know the logic behind it */
scan(struct node *next)
{
	int t; 
	int x1; 
	int x2; 
	int y1; 
	int y2; 
	struct interval range; 
	if (next == z)
		return;
	scan(next->l); 
	x1 = lines[next->info].p1.x; 
	y1 = lines[next->info].p1.y; 
	x2 = lines[next->info].p2.x;
	y2 = lines[next->info].p2.y; 
	if (x2 < x1)
	{
		t = x2; 
		x2 = x1; 
		x1 = t; 
	}
	if (y2 < y1)
	{
		t = y2; 
		y2 = y1; 
		y1 = t; 
	}
	if (next->key == y1)
		bstinsert(next->info, x1, hx); 
	if (next->key == y2)
	{
		bstdelete(next->info, x1, hx); 
		range.x1 = x1; 
		range.x2 = x2; 
		bstrange(hx->r, range); 
	}
	scan(next->r); 
}
/* Its rather straighforward to put together the code at the point where each node is "visited". First the coordinates of the endpoint of the corresponding line are fetched from the "lines" array, indexed by the "info" field of the node. 
 * Then the "key" field in the node is compared against these coordinates to determine whether this node corresponds to the upper or the lower endpoint of the line:*/
