/* 'p[k] = q[k] = k' for 'k' from '1' to 'N'
 * wihich indicates that no rearrangement has been done. 
 * The code for heap construction looks like before */

pqconstruct(int a[], int N)
{
	int k; 
	for (k = 1; k <= N; k++)
	{
		p[k] = k; 
		q[k] = k; 
	}

	for (k = N/2; k >= l; k--)
		pqdownheap(a, N, k); 
}

/* If you following along "pq" is to mark for algo that will be used later in 
 * this book that i'm basing this on 
 * If your next to this it gets complex after this DIR I say its worth 
 * rewriting all the code and post whats happening in commits next to the code to the piece of code */
/* also just run thought it by imaginging your putting in a array of N = 20 and doing an operations on 'kth' value you choose 
 * start with a small 'n' and 'k' then build up to aproching to (8 sideways ) the end of the number line */
