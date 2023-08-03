/* this version will be used throughout the rest of the DIR unless 
 * committed that i'm not using it */

pqdownheap(int a[], int N, int k)
{
	int j; 
	int v; 
	v = p[k]; 
	while (k <= N/2)
	{
		j = k + k; 
		if (j < N && a[p[j]] < a[p[j+1]])
			j++; 
		if (a[v] >= a[p[j]])
			break; 
		p[k] = p[j]; 
		q[p[j]] = k; 
		k = j; 
	}
	p[k] = v; 
	q[v] = k; 
}

/* This exploits the fact that the items to be involved in priority queue applications happen to be stored in an array. 
 *
 * You can get more general and have better implementation in C by basing on 
 * maintaing 'p' as an array of pointers to seperately allocate records. */
