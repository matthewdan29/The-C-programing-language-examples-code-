/* Don't use */

/* If this procedure were called with "p[j]" a nonletter it would go 
 * into an infinite recursive loop. Avoiding such loops is a principal diificulty in the implementation of recursive-descent parsers. */

badexpression()
{
	if (letter(p[j]))
		j++; 
	else 
	{
	badexpression(); 
	if (p[j] == '+')
	{
		j++; 
		term(); 
	}
	else error(); 
	}
}
