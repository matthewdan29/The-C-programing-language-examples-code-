#include <stdlib,h>
#include <stdio.h>

/* This method is to be used when 'N' records in a table of size "M > N"*/
/* linear probing: when there is a collision, then just probe the next position in the table, that is, compared the key in the record there against the search key. */

static struct node 
{
	char *key; 
	int info; 
}; 
static struct node a[M+1]; 

hashinitialize()
{
	int i; 
	for (i = 0; i <= M; i++)
	{
		a[i].key = " "; 
		a[i].info = -1; 
	}
}

hashinsert(char *v, int info)
{
	int x = hash(v); 
	while (strcmp(" ", a[x].key))
		x = (x + 1) % M; 
	a[x].key = v; 
	a[x].info = info; 
}

/* Linear probing requires a special key value to signal an  empty spot in the table; this program uses a single blank for that purpose. */
