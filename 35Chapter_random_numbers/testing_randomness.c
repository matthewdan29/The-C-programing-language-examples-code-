#include <stdio.h>
#include <stdlib.h>

/*standard distrobution test not as complex at a twin tail*/
/* The idea of the x^2 test is to check wheater or not the numbers produced are spread out reasonably. */
/* the lottery simple way to see if someone is stacking data also */

float chisquare(int N, int r, int s)
{
	int i; 
	int t; 
	int f[rmax]; 
	randinit(s); 
	for (i = 0; i < r; i++)
		f[i] = 0; 
	for (i = 0; i < N; i++)
		f[randomint(r)]++; 
	for (i = 0, t = 0; i < r; i++)
		t += f[i] * f[i]; 
	return (float) ((r * t/ N) - N); 
}

/* Simply calculate the sum of the squares of the frequencies of the occurrence of each value, scaled by the expected frequency, and then subtract off the size of the sequence. */
