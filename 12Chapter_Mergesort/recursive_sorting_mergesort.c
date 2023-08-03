/* Imagine your tring to sort and merge two files into one 
 *
 * This sorts the two halves(recursively), and then merge the two halves together
 * The following implementation of this process sorts an array a[1], ... a[r]
 * (using temp array b[l], .. , b[r]) */

mergesort(int a[], int l, int r)
{
	int i; 
	int j; 
	int k; 
	int m; 
	if (r > l)
	{
		m = (r+l)/2; 
		mergesort(a, l, m); 
		mergesort(a, m+1, r); 
		for (i = m+1; i > l; i--)
			b[i-1] = a[i-1];
	       	for (j = m; j < r; j++)
	       		b[r+m-j] = a[j+1]; 
		for (k = 1; k <= r; k++)
			/* Look at the conditiong making the inner loop longer*
			 *  The condition reads if true slide b[i] + 1
			 *  if false slide b[j] -1 */
	 		a[k] = (b[i]<b[j]) ? b[i++] : b[j--]; 		

	}
}

/* This program manages the merge without sentinels by copying the second array into position with the first, but in reverse order.
 * each array serves as a "sentinel" for the other (tried to find a better word then "sentinel")*/
