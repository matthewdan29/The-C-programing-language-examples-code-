#include <stdlib.h>
#include <stdio.h>



randinit(int s)
{
	for (a[0] = s, j = 0; j <= 54; j++)
		a[j] = (mult(a[j-1], b) +1) %m; 
}

/* The global variable 'a' has been replaced by a full table plus a pointer 'j' into it. */
int randomint(int r)
{/* This function returns a random integer between 0 and "r-1". */
	j = (j + 1) % 55; 
	a[j] = (a[(j + 23) % 55] +a[(j+54) % 55]) % m; 
	return ((a[j]/m1) *r)/m1; /* change to (a[j]/m) for real number between 0 and 1 */
}


/* Wee need to keep a table of size 'c' which always has the 'c' most recently generated numbers. 
 * The computation proceeds by replacing one of the numbers in the table by the sum of two of the other numbers in the table. 
 * Initially, the table should be filled with numbers that are not too small and not too large. 
 * Knuth recommends the choices "b=31", "c=55". We need to keep track of the 55 most recently generated numbers. 
 * The appropriate data structure for this is a queue but since it is of fixed size 
 * we just use an array of that size, indexed by a "circular" pointer, as in the following implementation. */
