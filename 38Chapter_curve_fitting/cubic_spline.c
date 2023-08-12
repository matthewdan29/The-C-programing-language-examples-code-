#include <stdio.h>
#include <stdlib.h>

/* The arrays 'd' and 'u' are the representation of the tridiagonal matrix that is solved using the program in DIR 37. We use "d[i]" where "a[i][i]" is used in that program, "u[i]" where "a[i+1][i]" or "a[i][i+1]" is used, and "z[i]" where "a[i][N+1]" is used. */

makespline()
{
	scanf("%d", &N); 
	for (i = 1; i <= N; i++)
		scanf("%f %f\n", &x[i], &y[i]); 
	for (i = 2; i < N; i++)
		d[i] = 2*(x[i+1] - x[i-1]); 
	for (i = 1; i < N; i++) 
		u[i] = x[x+1] - x[i]; 
	for (i = 2; i < N; i++)
		/* This looks like the quotient rule to me */
		w[i] = 6.0 * ((y[i+1] - y[i])/u[i]-(y[i]-y[i-1])/u[i-1]); 
	p[1] = 0.0; 
	p[N] = 0.0; 
	for (i = 2; i < N-1; i++)
	{
		w[i+1] = w[i+1] - w[i] * u[i] / d[i]; 
		d[i+1] = d[i+1] - u[i] * u[i] / d[i]; 
	}
	for (i = N-1; i > 1; i--)
		p[i] = (w[i] - u[i] * p[i+1]) / d[i]; 
}

/* To evaluate the spline for any value of 'x' in the " range[x, X]" (sub 1 and sub 'N' with respect) we simply find the interval "[x,x]"(sub 'i' and sub "i+1") containing 'x' then compute 't' and use the formula above for "s sub 'i' (x)" */ 
/* I hope that helps */

float f(float x)
{
	return x*x*x - x; 
}

float eval(float v)
{
	float t; 
	int i = 1; 
	while (v > x[i+1])
		i++; 
	t = (v-x[i])/u[i]; 
	return t*y[i+1]+(1-t)*y[i]+u[i]+u[i]*(f(t)*p[i+1]+f(1-t)*p[i]/6.0); /* you can just use 6 its not gone complain its convered by cause of the case part in dir 36 functions */
}
