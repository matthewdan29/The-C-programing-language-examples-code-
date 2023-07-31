#include <stdio.h>
#include <stdlib.h>

/* this is just the factorial function in code my guys N! */
int factorial(int N)
{
	if (N == 0)
		return 1; 
	return N * factorial(N-1); 
}

/* recursive program: it calls itself, and it has a termination condition in which it directly computes in result. */
