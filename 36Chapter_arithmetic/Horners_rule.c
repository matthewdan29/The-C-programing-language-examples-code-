/* A simple method which avoids recomputation and uses no extra space is known as Horner's rule: 
 * by alternating the mutilpication and addition operations appropriately, a degree-N polynomial can be evaluated using only "N-1" multiplications and 'N' additions. */

		p(x) = x(x(x(x+3)-6)+2)+1

	/* makes the order of computation: */
		y = p[N]; 
		for (i = N-1; i >= 0; i--)
			y = x*y + p[i]; 
