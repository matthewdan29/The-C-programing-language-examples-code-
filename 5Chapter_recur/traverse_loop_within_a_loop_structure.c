traverse(struct node *t)
{
	push(t); 
	while (!stackempty())
	{
		t = pop(); 
		if (t != z)
		{
			visit(t); 
			push(t->r); 
			push(t->l); 
		}
	}
}

/* One primary difference is that is program can be run in virtually any
 * programing environment, while the recursive implementaions obviouly requires
 * one that supports recursion.
 * Even in such an environment, this stack-based method is likely to be rather
 * more efficient. */
