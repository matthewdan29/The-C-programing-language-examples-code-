#include <stdlib.h>
#include <stdio.h>


pivot(int p, int q)
{
	int j; 
	int k; 
	for (j = 0; j <= N; j++)
		for (k = M+1; k >= 1; k--)
			if (j!=p && k != q)
				a[j][k] = a[j][k] -a[p][k]*a[j][q]/a[p][q]; 
	for (j = 0; j <= N; j++)
		if (j !=p) 
			a[j][q] = 0; 
	for (k = 1; k <= M+1; k++)
		if (k != q)
			a[p][k] = a[p][k]/a[p][q]; 
	a[p][q] = 1; 
}

/*Greatest-increment Method
 * Always choose the column with the smallest calue in row 0. */

/*Steepest-descent
 * column selectoin is actually to calculate the amount by which the objective function would increase for each column, then use the column which gives the largest result. */

/* Think of ML granete decent (very miss spelled)*/

for (;;)
{
	for (q = 0; (q <= M+1) && (a[0][q] >= 0); q++); 
	for (p = 0; (p <= N+1) && (a[p][q] <= 0); p++); 
	if (q > M || p > N)
		break; 
	for (i = p+1; i <= N; i++)
		if (a[i][q] > 0)
			if (a[i][M+1]/a[i][q] < a[p][M+1]/a[p][q])
				p = i; 
	pivot(p,q); 
}

/* If the for loop program terminates with "q=M+1" then an optimal solution has been found: the value achieved for the objective function is in "a[0][M+1]" and the calues for the variables can be recovered from the basis. If the program terminates with "p=N+1", then an unbounded situation has been detected. */

/*The whole program above treat a simple case that illustrates the principle behind the simplex algorithm but avoids the substantial complications that can arise in actual apps.*/
