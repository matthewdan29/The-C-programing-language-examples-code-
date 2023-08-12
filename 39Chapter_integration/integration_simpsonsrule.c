#include <stdio.h>
#include <stdlib.h>

/* This method was discovered by Thomas Simpson a British Mathematician. */

/* The idea is to eliminate the leading term in the error by combining the two methods. Multiplying the formula for the rectangle() method by two, adding the formula for the trapezoid() method then dividing by three gives the equation */

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

/* This program requires three "function evaluations" in the inner loop, but it produces far more accurate results than do the other methods. */
