#include <stdlib.h>
#include <stdio.h>

/* This code fragment is a straightforward implementation of polynomial multiplication. */
/* 'p' 'q' and 'r' are arrays */

int p[]; 
int q[]; 
int r[]; 

/* initilize r array at every index it a 0 r[] is the 2 times the size of N (the size of N matters because for large numbers the -1 is not that important) */
for (i = 0; i < 2 * N - 1; i++)
	r[i] = 0; 
/* */
for (i = 0; i < N; i++)
	for (j = 0; j < N; j++)
	/* as i and j increases at every iterations they are being add togeather at such block plus while p[i] times q[j] */
		r[i+j] += p[i] * q[j]; 

		/* (r[i] + r[j]) + p[i] * q[j]*/
		/* this looks a lot like the mulit rule in calc
		 * maybe the chain rule also
		 * if so its a speed up */
		/* possibly */
