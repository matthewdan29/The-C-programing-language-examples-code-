#include <stdlib.h>
#include <stdio.h>
/* The grid method works well if the points are well distributed over the assumed range, but badly if they are clustered together. */

/* Below is a implementation of a program to build the grid structure containing the points in an array "p[N+1]" of points */

#define maxG 20
struct node
{
	struct point p; 
	struct node *next; 
}; 
struct node *grid[maxG][maxG]; 
int size; 
struct node *z; 
preprocess(struct point p[], int N)
{
	int i; 
	int j; 
	z = (struct node *) malloc(sizeof *z); 
	for (size = 1; size*size < max*max/N; size *= 2); /* check this out */
	for (i = 0; i <= maxG; i++)
		for (j = 0; j <= maxG; j++)
			grid[i][j] = z; 
	for (i = 0; i <= N; i++)
		insert(p[i]); 
}

insert(struct point p)
{
	struct node *t; 
	t = (struct node *) malloc(sizeof *t); 
	t->p = p; 
	t->next = grid[p.x/size][p.y/size];
	grid[p.x/size][p.y/size] =t; 	
}

/* this program uses a linked-list representation, with 'z' being the tail node */

/* set the variable "size" depends on the number of points, the amount of memory available, and the range of coordinate values. Roughly, to get 'M' points per grid square, "size" should be chosen to be the nearest integer to "max" divided by (square(N/M)). This leads to about "N/M" gid squares. */

gridrange(struct rectangle range)
{
	struct node *t; 
	int i; 
	int j; 
	for (i = range.x1/size; i <= range.x2/size; i++)
		for (j = range.y1/size; j <= range.y2/size; j++)
			for (t = grid[i][j]; t != z; t = t->next)
				if (insiderect(t->p, range))
					/* point "t->p" is within range*/
					/* in sql think of you got your WHERE */
}

/* The running time of this program is proportional to the number of grid squares touched. since we were careful to arrange things so that each grid square contains a constant number of points on the average, the number of grid squares touched is also proportional, on the average, to the number of points examined. */

/* The grid method for range search is linear in the number of points in the range, on the average, and linear in the total nuber of points in the worse case. */

