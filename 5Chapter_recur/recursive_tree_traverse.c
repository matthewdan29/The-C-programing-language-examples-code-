traverse(struct node *)
{
	if (t != z)
	{
		traverse(t->l); 
		visit(t); 
		traverse(t->r); 
	}
}
/* This recusive implementation of tree traversal is more natural than a stack
 * implementation both beacause trees are recursively defined structures 
 * preorder, inorder, and postorder are recursively defined processes. */
