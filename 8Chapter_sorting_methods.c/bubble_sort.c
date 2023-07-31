#include <stdlib.h>
#include <stdio.h>

/* This keep passing throught the array, exchanging adjacent elements if necessarty when no exchancges are required on som pass the array is sorted. */
buble(int a[], int N)
{
	int i, j, t; 
	for (i = N; i >= 1; i--)
		for (j = 2; j <= i; j++)
			if (a[j-1] > a[j])
			{
				t = a[j-1]; 
				a[j-1] = a [j]; 
				a[j] = t; 
			}
}

/* This can be slow as hell if you encounter a list of elements that can be sorted from smallest to largest and you find the largest at the top. it's gone have to walk the whole len*/
