#include <stdio.h>
#include <stdlib.h>

/* Finding the area under a line with rectangles. if you used the deveiding the domain into equal parts and doing the area functions then adding up. Ya this is it in computer talk. */

double interect(double a, double b, int N)
{
	/*int f;*/ 
	int i; 
	double r = 0; 
	double w = (b-a)/N; 
	for (i = 1; i <= N; i++) /*(1< i < N)*/
		/*r += w*(a-w/2+i*w);*/ 
		r += w*f(a-w/2+i*w); /* f is supose to be the f(x)=poly */ 
	return r; 
}
/*
*int main()
*{
*	double r; 
*	int a; 
*	int b; 
*	int N; 
*	int i; 
*	for (i = 0; i < N; i++) (edit out )
*
*	scanf("%d %d %d\n", &a, &b, &N); 
*	interect(a,b,N); 
*	printf("%d %d\n", N, r); 
*}
*/
