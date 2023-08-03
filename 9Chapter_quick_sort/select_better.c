#include <stdlib,h>
#include <stdio.h>

select(int a[], int N, int k)
{
	int v; 
	int t; 
	int i; 
	int j; 
	int l;
	int r; 
	l = 1; 
	r = N; 
	while (r > l)
	{
		v = a[r]; 
		i = l-1; 
		j = r; 
		for (;;)
		{
			while (a[++i] < v); 
			while (a[--j] > v); 
			if (i >= j)
				break; 
			t = a[i]; 
			a[i] = a[j]; 
			a[j] = t; 
		}
		t = a[i]; 
		a[i] = a[r]; 
		a[r] = t; 
		if (i >= k)
			r = i -1; 
		if(i <= k)
		       l = i+1; 	
	}
}

/* An analysis similar to, but significantly more complex than, that given for quicksor */
