#include <stdlib.h>
#include <stdio.h>

/* this promise worse case will be N+M */
int kmpsearch(char *p, char *a)
{
	int i; 
	int j; 
	int M = strlen(p); 
	int N = strlen(a); 
	initnext(p); 
	for (i = 0, j = 0; j < M && i < N; i++, j++)
		while ((j >= 0) && (a[i] != p[j]))
			j = next[j]; 
	if (j == M)
		return i - M; 
	else 
		return i; 
}

/* When "j = 0" and "a[i]" does not match the "p[0]", there is no overlap,
 * so we want to increment 'i' and keep 'j' set at the beginging of the pattern. */

/* next it matches the pattern against itself */

initnext(char *p)
{
	int i; 
	int j; 
	int M = strlen(p); 
	next[0] = -1; 
	for (i = 0, j = -1; i < M; i++, j++, next[i] = j)
		while((j >= 0) && (p[i] != p[j]))
			j = next[j]; 
}

/* Just after 'i' and 'j' are incremented, it has beeen determined that the first
 * 'j characters of the parttern match the characters in posisitons "p[i-j-1], ..., p[i-1]", the last 'j' characters in the first 'i' characters of the pattern */
