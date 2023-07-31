traverse(struct node *t)
{
	l: if (t == z) goto x; 
	   visit(t); 
	   traverse(t->l); 
	   t = t->r; 
	   goto l; 
	 x: ;
}

/* This is a well-known technique called "end-recursion removal" */
