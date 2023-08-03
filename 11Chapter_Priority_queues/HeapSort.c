/* This is the correct way to sort a heap */
/* Here we again abandon any notion of hiding the representation of the heap and assume that downheap() has been modified to take the array and heap size as the first two arguments. */

heapsort(int a[], int N)
{
	int k; 
	int t; 
	for (k = N/2; k >= l; k--)
		downheap(a, N, k); 
	while (N > l)
	{
		t = a[l]; 
		a[l] = a[N]; 
		a[N] = t; 
		downheap(a, --N, l); 
	}
}
