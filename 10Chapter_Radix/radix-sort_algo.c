#include <stdio.h>
#include <stdlib.h>

/* This algo uses C programing lang bit manipulation to speed up sorting */
unsigned bits(unsigned x, int k, int j)
{
	return (x >> k) & ~(~0 << j);
}

/* The right most bit of 'x' is returned by the call bit(x, 0, 1) */
