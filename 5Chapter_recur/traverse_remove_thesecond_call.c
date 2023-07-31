traverse(struct node *t)
{
	l: if (t == z) goto s; 
	   visit(t); 
	   push(t); 
	   t = t->l; 
	   goto l; 
	r: t = t->r; 
	   goto l; 
	s: if (stackempty()) goto x; 
	   t = pop(); 
	   goto r; 
	x: ; 
}

/* There is only one local variable, t, so we push that on the stack and "goto"
 * the beginning, there is only one return address, r, which is fixed, so 
 * we don't put it on the stack. at the end of the procedure, we set t from the
 * stack and goto the return address r. when the stack is empty, we return 
 * from the first call to traverse() ( long example of goto in a stack struct)*/
