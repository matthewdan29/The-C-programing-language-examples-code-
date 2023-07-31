/* better version of fibonacci algo */
#define max 25
int fibonacci(int N)
{
	int i; 
        int F[max]; 
	F[0] = 1; 
	F[1] = 1; 
	for (i = 2; i <= max; i++)
		F[i] = F[i - 1] + F[i - 2]; 
	return F[N]; 
}
