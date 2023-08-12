#include <stdio.h>
#include <stdlib.h>

/* The following is a bad program for producing random numbers range [0, r-1]*/
#define m 100000000
#define m1 10000
#define b 31415821

static int a; 
/* breaking it up into polinomalies(miss spelled X^2 + X + C)*/
int mult(int p, int q)
{	/* This brakes up the muli into pieces so it avoids overflow */
	int p1; 
	int p0; 
	int q1; 
	int q0; 
	p1 = p/m1; 
	p0 = p%m1;
	q1 = q/m1; 
	q0 = q%m1; 
	return (((p0*q1+p1*q0) % m1) *m1+p0*q0) % m; 
}

/* This is the wrong way to produce random numbers in range(0,0, r-1) (python)*/
long random()
{	/* a is set to the product of 'a' and 'b' +1 and mod m */
	a = (mult(a,b)+1) % m; 
	/* communicate with by returning a to the main function */
	return a; 
}

int main()
{
	int i; 
	int N; 
	scanf("%d %d", &N, &a); 
	for (i = 1; i <= N; i++)
		printf("%d", random()); 
	printf("\n"); 
}
