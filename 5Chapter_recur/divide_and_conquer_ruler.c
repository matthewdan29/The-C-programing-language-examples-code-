/* look at the theme of the chapter you will see it calls it's and uses mark()*/

rule(int l, int r, int h)
{
	int m = (l + r)/2; 
	if (h > 0)
	{
		mark(m, h); 
		rule(l, m, h-1); 
		rule(m, r, h-1); 
	}
}
