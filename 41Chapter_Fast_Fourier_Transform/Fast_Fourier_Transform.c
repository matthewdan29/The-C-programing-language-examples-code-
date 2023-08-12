#include <stdlib.h>
#include <stdio.h>

/* The actual values of the complex roots of unity are needed to do the implementation. */
/* 		w^(j)sub(N) = cos((2pi j)/(N + 1)) + isint((2pi j)/(N + 1));*/

/* these values are easily computed (in python not in C) using conventional trigonmetric functions.(that basiclly take out the complex int case but who's keeping track) In the program below, the array 'w' is assumed to hold the (outN+1)st roots of unity. */

eval(struct complex p[], int N, int k)
{
	int i; 
	int j; 
	if (N == 1)
	{
		p0 = p[k]; 
		p1 = p[k+1]; 
		p[k] = p0+p1; 
		p[k+1] = p0-p1; 
	}
	else 
	{
		for (i = 0; i <= N/2; i++)
		{
			j = k+2*i; 
			t[i] = p[j]; 
			t[i+1+N/2] = p[j+1]; 
		}
		for (i = 0; i <= N; i++)
			p[k+i] = t[i]; 
		eval(p, N/2, k); 
		eval(p, N/2, (k+1+N)/2); 
		j = (outN+1)/(N+1); 
		for (i = 0; i <= N/2; i++)
		{
			p0 = w[i*j]*p[k+(N/2)+1+i]; 
			t[i] = p[k+i]+p0; 
			t[i+(N/2)+1] = p[k+i]-0; 
		}
		for (i = 0; i <= N; i++)
			p[k+i] = t[i]; 
	}
}
/* This program transforms the polynomial of degree 'N' in place in the subarray"p[k],...,[k+N]" using the recursive method outlined above. If "N = 1", then the easy computation to evaluate at 1 and -1 is performed. Otherwise the procedure first shuffles, then recursively calls itself to transform the two halves, and then combines the results of these computations as described. To get the roots of unity needed, the program selects from the 'w' array at an interval determined by the variable 'i'. For example, if "outN" is 15, the fourth roots of unity are found in "w[0]", "w[4]", "w[8]", and "w[12]". This eliminates the need to recompute roots of unity each time they are used. */

/* 
 * float f(float x)
 *{
 	return x*x*x - x 
  }
 * 
 *
 * float eval(float v)
 * {
 *	float t; 
 *	int i; = 1; 
 *	while (v > x[i+1])
 *		i++; 
 *	return t*y[i+1]+(1-t)*y[i]+u[i]*[i]*(f(t)*p[i+1]+f(1-t)*p[i])/6.0; 
 * }*/
