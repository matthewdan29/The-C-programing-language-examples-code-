#include <stdlib.h>
#include <stdio.h>

/* finding the area under the curve useing trapezoid more common case. */

double inttrap(double a, double b, int N)
{
	int i; 
	double t = 0; 
	double w = (b-a)/N; 
	for (i = 1; i <= N; i++)
		t += w*(f(a+(i-1)*w)+f(a+i*w))/2; 
	return t; 
}
