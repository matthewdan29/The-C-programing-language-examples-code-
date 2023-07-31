#include <stdlib.h>
#include <stdio.h>

/* This quicksort() with out recursion */
/* I don't know why you would want this the whole base it to cut the problem
 * down into small problems which leads to you being able to sort just 2 
 * it's with a stack you going pop that for them or be a real one and use recursion with ptr?*/

quicksort(int a[], int N)
{
	int i, l, r;
	l = 1;
	r = N; 
	stackinit();

	for(;;)
	{
		while (r > l)
		{
			i =  partition(a, l, r); 
			if (i - 1 > r - i)
			{
				push(l); 
				push(i - 1); 
				l = i+l; 
			}
			else 
			{
				push(i+1); 
				push(r); 
				r = i -1; 
			}
		}
		if (stackempty())
			break; 
		r = pop(); 
		l = pop(); 
	}
}
