#include <stdlib.h>
#include <stdio.h>

/* The code to construct "2D" tree is a straightforward modification of standard binary tree search to switch between 'x' and 'y' coordinates at each level. */

tree2Dinsert(struct point p)
{
	struct node *f; 
	int d; 
	int td; 
	/* check out this loop condition it making sure head != z 
	 * meaning its something inside of the liked list beside the a head and a padding tail = z */
	for (d = 0, t = head; t != z; d != d)
	{
		td = d ? (p.x < t->p.x) : (p.y < t->p.y); 
		f = t; 
		t = td ? t->l : t->r; 
	}
	t = (struct node *) malloc(sizeof *t); 
	t->p = p; 
	t->l = z; 
	if (td) 
		f->l = t; 
	else 
		f->r = t; 
}
/* Here a "node" is a point together with left and right links to nodes. */

preprocess(struct point p[], int N)
{
	int i; 
	p[0].x = 0; 
	p[0].y = 0; 
	p[0].info = 0; 
	z = (struct node *) malloc(sizeof *z); 
	z->l = z; 
	z->r = z; 
	z->p = p[0]; 
	head = (struct node *) malloc(sizeof *head); 
	head->r = z; 
	head->p = p[0]; 
	for (i = 1; i <= N; i++)
		tree2Dinsert(p[i]); 
}
/* The initialization code must be carefully coordinated with the start conditions for code which travels through the tree, otherwise an annoying buy will arise with the algorithm looking for 'x' coordinates where the tree has 'y' coordinates and vice versa. */

tree2Drange(struct node *t, struct rect range, int d)
{
	int t1; 
	int t2; 
	int tx1; 
	int tx2; 
	int ty1; 
	int ty2; 
	if (t == z)
		return; 
	tx1 = range.x1 < t->p.x; 
	tx2 = t->p.x <= range.x2; 
	ty1 = range.y1 < t->p.y; 
	ty2 = t->p.y <= range.y2; 
	t1 = d ? tx1 : ty1; 
	t2 = d ? tx2 : ty2; 
	if (t1)
		tree2Drange(t->l, range, !d); 
	if (insiderect(t->p, range))
		/* point t->p is within the range */
		/* you can write all the index to a .txt or print to screen */
	if (t2)
		tree2Drange(t->r, range, !d); 
}
/* This procedure goes down both subtrees only when the dividing line cuts the rectangle, which should happen infrequently for relatively small rectangles. */


/* The same algorithme is used to insert points into "2D-trees" as in normal binary search trees, but at the root we use the y coordinate
 * (if the point to be inserted has a smaller 'y' coordinate than the point at the root, go left; otherwise go right), then at the next level we use the 'x' coordinate, then at the next level the 'y' coordinate, etc alternating until an external node is encountered. */
