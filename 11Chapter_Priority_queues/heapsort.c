#include <stdlib.h>
#include <stdio.h>

/* In real production your not going to use this to sort anything its to costly and could mess up hits on databases unless there is a proxiy DB with your data structed. Even if your have the application isolated in a Cgroup value with IDK what beenifits it will have with todays technology. */

/* I could be wrong */

heapsort(int a[], int N)
{
	int k; 
	construct(a,0); 
	for (k = 1; k <= N; k++)
		insert(a[k]); 
	for (k = N; k >= l; k--)
		a[k] remove(); 
}


