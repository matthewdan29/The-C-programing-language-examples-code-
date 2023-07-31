#include <stdio.h>

/* The main() reads in N numbers and then calls a subroutine to sort them */

int sort3(int a[], int N)
{
	int t; 
	if (a[1] > a[2])
	{
		t = a[1]; 
		a[1] = a [2]; 
		a[2] = t; 
	}
	
	if (a[1] > a[3])
	{
		t = a[1]; 
		a[1] = a[3]; 
		a[3] = t; 
	}

	if (a[2] > a[3])
	{
		t = a[2]; 
		a[2] = a[3]; 
		a[3] = t;
	}
}

#define maxN 100
int main()
{
	/*int maxN = 100;*/ 
	int N; 
	int i; 
	int a[maxN+1]; 
	N = 0;
	/*printf("%b", a[maxN + 1]);*/ 
	/*printf("%d", maxN);*/ 
       /*printf("%d", N);*/ 	
	/*printf("%d, %d, %d", N, i, a[maxN+1]);*/ 
	while (scanf("%u", &a[N+1]) != EOF)
		N++; 
	a[0] = 0; 
	sort3(a, N); 
	for (i = 1; i <= N; i++) 
		printf("%d", a[i]); 
	printf("\n"); 
}

/* The three assignment statements following each "if" in sort3() actually 
 * implement an "exchange" operation.Writing out the code for exchanges is 
 * fundamental to many sorting programs and often fall in the inner loop.*/
