#include <stdlib.h>
#include <stdio.h>

/* It is resonable to use small intervals where the derivatives are large and large intervals where the derivatives are small. A method which does this in a systematic way is called an "Adaptive quadrature routine". */

double intsimp(double a, double b, int N)
{
	int i; 
	double s = 0; 
	double w = (b-a)/N; 
	for (i = 1; i <= N; i++)
		/* w*((a+(i-1)*w)+(a+i*w))/6 */
		s += w*(f(a+(i-1)*w)+f(a+i*w))/6; 
	return s; 
}

double adapt(double a, double b)
{
	double x = intsimp(a, b, 10); 
	if (fabs(x - intsimp(a, b, 5)) > tolerance)
		return adapt(a, (a+b)/2) + adapt((a+b)/2,b); 
	return x; 
}

/* Both estimates for the integral are derived from Simpsons method, but one uses twice as many subdivisions as the other. Essentially, this amounts to checking the accuracy of Simpson method over the interval in question and then subdividing if it is not good enough. */
