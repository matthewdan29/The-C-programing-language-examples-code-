/* ok if you want to use this function but it's complex idk why */
rule(int l, int r, int h)
{
	int i; 
	int j; 
	int t; 
	for (i = l, j = 1; i <= h; i++, j+=j)
		for (t = 0; t <= (l + r)/j; t++)
			mark(l+j+t * (j+j), i); 
}
