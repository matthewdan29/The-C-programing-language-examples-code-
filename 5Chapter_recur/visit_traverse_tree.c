visit(struct node *t)
{
	t->x = ++x; 
	t->y =y;
}

traverse(struct node *t)
{
	y++; 
	if (t != z)
	{
		traverse(t->l); 
		visit(t); 
		traverse(t->r);
	}
	y--; 
}

/* The program uses two global veriables, x and y, both assumed to be 
 * initialized to 0. 
 * The variable x keeps track of the number of nodes that have been visited
 * in inorder; the variable y keeps the height of the tree. Each time 
 * traverse() goes down in th tree it is incremented by one, and each time
 * it goes up in the tree it is decremented by one.*/
