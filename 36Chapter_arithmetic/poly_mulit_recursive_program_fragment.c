float *multi(float p[], float q[], int N)
{
	float p1[N/2]; 
	float q1[N/2]; 
	float ph[N/2]; 
	float qh[N/2]; 
	float t1[N/2]; 
	float t2[N/2]; 
	float r[2*N/2]; 
	float r1[N]; 
	float rm[N]; 
	float rh[N]; 
	int i; 
	int N2; 
	if (N == 1)
	{
		r[0] = p[0] * q[0]; 
		return (float *) r; 
	}

	for (i = 0; i < N/2; i++)
	{
		p1[i] = p[i]; 
		q1[i] = q[i]; 
	}

	for (i = N/2; i < N; i++)
	{
		ph[i - N/2] = p[i]; 
		qh[i - N/2] = q[i]; 
	}
	for (i = 0; i < N/2; i++)
		t1[i] = p1[i] + ph[i]; 
	for (i = 0; i < N/2; i++)
		t2[i] = q1[i] + qh[i];
	rm = mult(t1, t2, N/2); 
	rl = mult(p1, q1, N/2); 
	rh = mult(ph, qh, N/2); 
	for (i = 0; i < N - 1; i++)
		r[i] = r1[i]; 
	r[N - 1] = 0; 
	for (i = 0; i < N-1; i++)
		r[N+i] = rh[i]; 
	for (i = 0; < N-1; i++)
		r[N/2+i] += rm[i] - (rl[i] + rh[i]); 
	return (float *) r; 
}
