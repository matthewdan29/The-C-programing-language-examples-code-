#include <stdlib.h>
#include <stdio.h>

/* This is creating the struct for the operatioins using red black tree */
/* Here the binary flag "red" as an integer */
static struct node 
{
	int key; 
	int info; 
	int red; 
	struct node *l; 
	struct node *r; 
}; 

static struct node *head; 
static struct node *z; 
static struct node *gg; 
static struct node *g; 
static struct node *p; 
static struct node *x; 

rbtreeinitialize()
{
	z = (struct node *) malloc(sizeof *z); 
	z->l = z; 
	z->r = z; 
	z->red = 0; 
	z->info = -1; 
	head = (struct node *) malloc(sizeof *head); 
	head->r = z; 
	head->key = 0; 
	head->red = 0; 
}

/* The oldest and most well-known datat structure for balanced trees is the 
 * AVLTree<AVLTree<char, char>, char>*/
