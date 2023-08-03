#include <stdlib.h>
#include <stdio.h>

#define q 33554393
#define d 32
int rksearch(char *p, char *a)
{
	int i; 
	int dM = 1; 
	int h1 = 0; 
	int h2 = 0; 
	int M = strlen(p);
	int N = strlen(a); 
	for (i = 1; i < M; i++)
		dM = (d*M) %q; 
	for (i = 0; i < M; i++)
	{
		h1 = (h1 * d + index(p[i])) %q; 
		h2 = (h2 * d + index(a[i])) %q; 
	}
	for (i = 0; h1 != h2; i++)
	{
		h2 = (h2 + d * q - index(a[i]) *dM) %q; 
		h2 = (h2 * d + index(a[i+M])) %q;
		if (i > N - M)
			return N; 
	}
	return i; 
}
