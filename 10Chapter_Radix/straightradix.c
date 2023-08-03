#include <stdio.h>
#include <stdlib.h>

/* THIS METHOD IS UNSTABLE AND USED DURING PUCH CARDS although this is a fast method */

straightradix(int a[], int b[], int N)
{
	int i; 
	int j; 
	int pass; 
	int count[M-1]; 
	for (pass = 0; pass < (w/m) -1; pass++)
	{
		for (j = 0; j < M; j++)
			count[j] = 0; 
		for (i = l; i <= N; i++)
			count[bits(a[i], pass*m, m)]++; 
		for (j = l; j < M; j++)
			count[j] = count [j-1]+count[j]; 
		for (i = N; i >=1; i--)
			b[count[bits(a[i], pass*m, m)] -- ] = a[i]; 
		for (i = 1; i <=N; i++)
			a[i] = b[i]; 
	}
}

/* This implementation assumes that the caller passes the temporay array as an input 
 * parameter as well as the array to be sorted. The correspondence 'M = 2^m' has been preserved in the variable names, though readers translating to other languages should be warned that some langs enviroment can't tell the difference between letter cases you my guy you can be using a lang that think K and k is the same. are your the robot?*/
