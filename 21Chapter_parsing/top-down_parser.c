#include <stdlib.h>
#include <stdio.h>


/* A string 'p' contains the regular expression being parsed, with an index 'j' pointing to character currently being examined. */
expression()
{
	term(); 
	if (p[j] == '+')
	{
		j++; 
		expression();
	}
}

/* This implementation of term checks the input to decide whether "term()" should be called. */
term()
{
	factor(); 
	if ((p[j] == '(') || letter(p[j])) 
		term(); 
}


/*"factor()" the input character being scanned is not a "(" or an input letter, a procedure "error" is called to handle the error condition. */

factor()
{
	if (p[j] == '(')
	{
		j++; 
		expression(); 
		if (p[j] == ')')
			j++; 
		else 
			error(); 
	}
	else if (letter(p[j]))
		j++; 
	else 
		error(); 
	if (p[j] == '*')
		j++; 
}

/* This process corresponds to traversing the tree in preorder, thought the correspondence is not exact because our lookahead strategy essentially amountedto chaing the grammer. */





























/*write a main() that reads in the file "example.txt" and match a given input 
 * user makes (scan(%d, &d)) */
