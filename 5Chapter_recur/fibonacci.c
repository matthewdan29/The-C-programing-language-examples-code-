/* its fibonacci come on guys it's like 10000 videos on it */

int fibonacci(int N)
{
	if (N <= 1)
		return 1; 
	return fibonacci(N-1) + fibonacci(N - 2); 
}
