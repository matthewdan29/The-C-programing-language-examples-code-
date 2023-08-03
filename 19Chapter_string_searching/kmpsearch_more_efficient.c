#include <stdlib.h>
#include <stdio.h>

int kmpsearch(char *a)
{
	int i = -1; 
sm: i++; 
s0: if (a[i] != '1')
	    goto sm; 
    i++;
s1: if (a[i] != '0') 
	    goto s0; 
    i++; 
s2: if (a[i] != '1') 
	    goto s0; 
    i++;
s3: if (a[i] != '0')
	    goto s1; 
    i++; 
s4: if (a[i] != '0')
	    goto s2; 
    i++; 
s5: if (a[i] != '1') 
	    goto s0; 
    i++;
s6: if (a[i] != '1')
	    goto s1; 
    i++; 
s7: if (a[i] != '1')
	    goto s1; 
    i++; 
    return i - 8; 
}
