/* The following implementation assumes a type complex for which the obvious arithmetic functions are defined: */

eval(p, outN, 0); 
eval(q, outN, 0); 
for (i = 0; i <= outN; i++)
	r[i] = p[i] * q[i];
eval(r, outN, 0); 
for (i = 1; i <= N; i++)
{
	t = r[i];
	r[i] = r[outN+1-i]; 
	r[outN+1-i] = t; 
}
for (i = 0; i <= outN; i++)
	r[i] = r[i]/(outN+1); 

	/* This program assumes that the global variable "outN" has been set to "2N-1" and that 'p','q',and 'r' are arrays indexed from 0 to 2N-1 thathold complex numbers.*/
