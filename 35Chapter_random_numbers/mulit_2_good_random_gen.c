#include <stdlib.h>
#include <stdio.h>

#define m 100000000
#define m1 10000
#define b 31415821
static int a; 
int multi(int p, int q)
{
	int p1; 
	int p0; 
	int q1; 
	int q0; 
	p1 = p/m1; 
	p0 = p%m1; 
	q1 = q/m1; 
	q0 = q%m1; 
	return (((p0 * q1 + q0) % m1)*m1+p0*q0) %m; 
}

/* good version of random() */
long int random(int r)
{
	a = (multi(a,b)+1) %m; 
	return ((a/m1) *r)/m1;
}

int main()
{
	int i; 
	int N; 
	int r = N; 
	scanf("%d %d", &N, &a); 
	for (i = 1; i <= N; i++)
		printf("%d", random(r));
	printf("/n"); 
}
