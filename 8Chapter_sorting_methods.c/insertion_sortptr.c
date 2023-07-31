#include <stdlib.h>
#include <stdio.h>

/* The strong relationship between pointer and arrays is one of the most 
 * distinctive features of C. Generally, program implemented with pointers are more efficient but harder to understand. */
/* int *p[] is taking in an array of pointers */
insertion(int a[], int *p[], int N)
{
	int i, j, *v; 
	for (i = 0; i <= N; i++)
		p[i] = &a[i]; 
	for (i = 2; i <= N; i++)
	{
		v = p[i];
		j = i; 
		while (*p[j-1] > *v)
		{
			p[j] = p[j-1]; 
			j--; 
		}
		p[j] = v; 
	}
}
