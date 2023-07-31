/* just drawing a square function you find a main for it */

star(int x, int y, int r)
{
	for(r > 0)
	{
		star(x-r, y+r, r/2); 
		star(x+r, y+r, r/2); 
		star(x-r, y-r, r/2); 
		star(x+r, y-r, r/2); 
		box(x,y,r); 
	}
}

/* */
