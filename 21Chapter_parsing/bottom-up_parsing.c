#include <stdlib.h>
#include <stdio.h>

/* "expressoin()" production creates the 'or' states for the patern matching */
/* This function uses a procedure "setstate" which sets the "ch", "next1",
 * and "next2" arrays entries indexed by the first argument to the values
 * given in the second, third, and fourth arguments, respectively. */
int expression()
{
	int t1; 
	int t2; 
	int r; 
	t1 = term(); 
	r = t1; 
	if (p[j] == '+')
	{
		j++; 
		state++; 
		t2 = state; 
		r = t2; 
		state++; 
		setstate(t2, ' ', expression(), t1); 
		setstate(t2-1, ' ', state, state); 
	}
	return r; 
}

/* simply ignore the initial state index returned by the call to "term()":
 * C requires us to put it somewhere, so we throw it away in a temporary variable 't' */
term()
{
	int t; 
	int r; 
	r = factor(); 
	if ((p[j] == '(') || letter(p[j]))
		t = term();
	return r; 
}

factor()
{
	int t1; 
	int t2; 
	int r; 
	if (p[j] == '(')
	{
		j++; 
		t2 = expression(); 
		if (p[j] == ')')
			j++; 
		else 
			error(); 
	}
	else if (letter(p[j]))
	{
		setstate(state, p[j], state+1, state+1); 
		t2 = state; 
		j++; 
		state++; 
	}
	else error(); 
	if (p[j] != '*')
		r = t2; 
	else 
	{
		setstate(state, ' ', state+1, t2); 
		r = state; 
		next1[t1-1] = state; 
		j++; 
		state++; 
	}
	return r; 
}

/* The final step in the development of a general regualr-expression pattern
 * matching algorithm is to put these procedures together with "match()" procediure */

matchall(char *a)
{
	j = 0; 
	state = 1; 
	next1[0] = expression(); 
	setstate(0, ' ', next1[0], next1[0]); 
	setstate(state, ' ', 0, 0); 
	while (*a != '\0')
		printf("%d", match(a++)); 
	printf("\n"); 
}

/* This program prints out, for each character positioin in a text string 'a' 
 * the length of the shortest substring at that position matching a pattern 'p'*/
