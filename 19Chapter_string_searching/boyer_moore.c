#include <stdlib.h>
#include <stdio.h>

int mischarsearch(char *p, char *a)
{
	int i; 
	int j; 
	int t; 
	int M = strlen(p); 
	int N = strlen(a); 
	initskip(p);
	for (i = M - 1, j = M - 1; j > 0; i--, j--)
		while(a[i] != p[j])
		{
			t = skip[index(a[i])]; 
			i += (M - j > t) ? M - j : t; 
			if (i >= N)
				return N; 
			j =M - 1; 
		}
	return i; 
}
