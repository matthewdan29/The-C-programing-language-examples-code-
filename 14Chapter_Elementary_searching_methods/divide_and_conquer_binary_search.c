/* A way to divide the set of records into parts is to keep the records sorted,
 *  then use indices into the sorted array to delimit the part of the array being worked on */

int binsearch(int v)
{
	int l = 1; 
	int r = N; 
	int x; 
	while (r >= l)
	{
		if (v < a[x].key)
			r = x-1; 
		else 
			l = x+1; 
		if (v == a[x].key)
			return a[x].info; 
	}
	return -1; 
}

/* for array size 'N' if searching for node 'i' 
 * first array size 'N' is broken into 2 sub array 'l' and 'r'
 * if node 'i' > 'l' then it searches array 'r'
 * if node 'i' < then array "r[0]" then searches array 'l' */
