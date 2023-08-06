/* FYI: graphs are far better at finding floors and ceiling in data sets to me*/
#include <stdlib.h>
#include <stdio.h>

/*The range-searching problem in one dimension is to return all points falling within a specified interval.*/

/* By  building a binary search tree and then doing a simple recursive traversal of the tree, returning points within the interval and ignoring parts of the tree outside the interval. This program required is a simple recursive tree traversal. If the left endpoint of the interval falls to the left of the point at the root , we search the left subtree, and similartly for the right, checking each node we encounter to see whether its point falls within the interval. */

struct interval
{
	int x1; 
	int x2; 
}; 

treerange(struct node *t; struct interval range); 
{
	int tx1; 
	int tx2; 
	if (t == z)
		return; 
	tx1 = (t->key >= range.x1); 
	tx2 = (t->key <= range.x2); 
	if (tx1)
		treerange(t->l, range); 
	if (tx1 && tx2)
		/*return t; */
		/* t-key is within the range*/
	if (tx2)
		treerange(t->r, range); 
}

/* This program could be made slightly more efficient by maintaining the "int" as a global variable rather than passing it unchanged values through the recursie calls */
