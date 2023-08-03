#include <stdlib.h>
#include <stdio.h>

/* The following program searches in this way for the first occurence of a pattern string 'p' in a text string 'a'. */

int brutesearch(char *p, char *a)
{
	int i; 
	int j; 
	int M = strlen(p); 
	int B = strlen(a); 
	for (i = 0, j = 0; j < M && i < N; i++, j++)
		while (a[i] != p[j])
		{
			i -= j - 1; 
			j = 0; 
		}
	if (j == M) 
		return i - M; 
	else 
		return i; 
}

/* This program keeps one pointer 'i' into the text and another pointer 'j' into the pattern. */
