#include <stdio.h>
#include <stdlib.h>

/* This method is for when data valuse are not exact, but have some idea of the form of the function that is to fit the data. */

/* The method of least squares can be extended to handle nonlinear functions, and it is often used for this type of application. */
for (i = 1; i <= M; i++)
	for (j = 1; j <= M+1; j++)
	{
		t = 0.0; 
		for(k = 1; k <= N; k++)
		
			t += f[i][k] * f[j][k]; 
		a[i][j] = t; 
		
	}

/* 
 * eliminate()
 * {
 *	int i; 
 *	int j; 
 *	int k; 
 *	int max; 
 *	float t; 
 *	for (i = 1; i <= N; i++)
 *	{
 *		max = i; 
 *		for (j = i+1; j <= N; j++)
 *			if (abs(a[j][i]) > abs(a[max][i]))
 *				max = j; 
 *		for (k = i; k <= N + 1; k++)
 *		{
 *			t = a[i][k]; 
 *			a[i][k] = a[max][k]; 
 *			a[max][k] = t; 
 *		}
 *		for (j = i+1; j <= N; j++)
 *			for (k = N+1; k >= i; k--)
 *				a[j][k] -= a[i][k] * a[j][i]/a[i][i]; 
 *	}
 * }*/
