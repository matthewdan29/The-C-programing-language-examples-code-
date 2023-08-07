#include <stdlib.h>
#include <stdio.h>

/* The closest-pair problem is to find the two points that are closest together among a set of points. This problem is related to the nearest-neighor problem; though it is not as widely applicable, it will serve us well as a protoype closet-point problem in that it can be solved with an algorithm whose general recursive structure is appropriate for other problems. */

/* If "pass" is 1, we should compare the 'x' coordinates of the two points; 
 * if "pass" is 2 we compare the 'y' coordinates of the two points. */

int comp(struct node *t)
{
	return (pass == 1) ? t->p.x : t->p.y; 
}
struct node *merge(struct node *a, struct node *b)
{
	struct node *c; 
	c = z; 
	do 
		if (comp(a) < comp(b))
		{
			c->next = a; 
			c = a; 
			a = a->next; 
		}
		else 
		{
			c->next = b; 
			c = b; 
			b = b->next; 
		}
	while (c != z); 
	c = z->next; 
	z->next = z; 
	return c; 
}

/* The dummy end node 'z' contain a "sentinel" point with artificially hig 'x' and 'y' coordinates. */

/* if the distance between two points given is less than global variable "min"*/

check(struct point p1, struct point p2)
{
	float dist; 
	if ((p1.y != z->p.y) && (p2.y != z->p.y))
	{
		dist = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y)); 
		if (dist < min)
		{
			min = dist; 
			cp1 = p1; 
			cp2 = p2; 
		}; 
	}
}
/* The global "min" always contains the distance between "cp1" and "cp2", the closest pair found so far. */

/* This is a modifed sort to work with the algo */

struct node *sort(struct node *c, int N)
{
	int i; 
	struct node *a; 
	struct node *b; 
	float middle; 
	struct point p1; 
	struct point p2; 
	struct point p3; 
	struct point p4; 
	if (c->next == z)
		return c; 
	a = c; 
	for (i = 2; i <= N/2; i++)
		c = c->next; 
	b = c->next; 
	c->next  = z; 
	if (pass == 2)
		middle = b->p,x; 
	c = merge(sort(a, N/2), sort(b, N-(N/2))); 
	if (pass == 2)
	{
		p1 = z->p; 
		p2 = z->p; 
		p3 = z->p; 
		p4 = z->p; 
		for (a = c; a != z; a = a->next)
			if (fabs(a->p.x - middle) < min)
			{
				check(a->p, p1); 
				check(a->p, p2); 
				check(a->p, p3); 
				check(a->p, p4); 
				p1 = p2; 
				p2 = p3; 
				p3 = p4; 
				p4 = a->p; 
			}
	}
}
/* Its the logic of sorting the points first by the 'y' coordinates then by the 'x' coordinates. */


/* The following code invokes sort twice to effect the closest pair computation. First, sort on 'x'; then sort 'y' and find the closest pair */

/*int main()
{
	z = (struct node *) malloc(sizeof *z); 
	z->p.x = INT_MAX; 
	z->p.y = INT_MAX; 
	z->next = z; 
	h = (struct node *) malloc(sizeof *h); 
	h->next = readlist(); 
	min = INT_MAX; 
	pass = 1; 
	h->next = sort(h->next, N); 
	pass = 2; 
	h->next = sort(h->next, N); 
}*/

/* The closest pair of points is found in the global variable "cp1" and "cp2", which are managed by the "check" find the minimum procedure. */

