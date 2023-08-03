#include <stdlib.h>
#include <stdio.h>

/* Here 'h' is the computed hash value and the constant 64 is,
 * strictly speaking, an implementation-dependent constant related to the 
 * alphabit size */

unsigned hash(char *v)
{
	int h; 
	for (h = 0; *v != '\0'; v++)
		h = (64*h + *v) % M; 
	return h; 
}
