for (j = 0; j < M; j++)
	count[j] = 0; 
for (i = 1; i <= N; i++)
	count[a[i]]++; 
for (j = 1; j < M; j++)
	count[j] = count[j-1] + count[j]; 
for (i = N; i >= 1; i--)
	b[count[a[i]]--] a[i]; 
for (i = 1; i <= N; i++)
	a[i] = b[i]; 
