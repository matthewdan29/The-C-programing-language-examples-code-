#include <stdio.h>
#include <stdlib.h>

/* After the forward-elimination phase has been completed, the array 'a' has all zeros below the diagonal and the backward substitution phase can be executed.*/


substitute()
{
	int j;
	int k; 
	float t; 
	for (j = N; j >= 1; j--)
	{
		t = 0.0;
		for (k = j+1; k <= N; k++) 
			t += a[j][k] * x[k]; 
		x[j] = (a[j][N+1]-1)/a[j][j]; 
	}
}

/* A call to "eliminate()" followed by a call to "substitute()" computes the solution in the N-element array 'x'. q /p mod r where p is 0 could still happen */
