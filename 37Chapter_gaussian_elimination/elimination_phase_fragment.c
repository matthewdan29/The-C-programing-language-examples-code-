for (i = 1; i <= N; i++)
	for (j = i+1; j <= N; j++)
		for (k = N+1; k >= i; k--)
			a[j][k] -= a[i][k]*a[j][i]/a[i][i]; 

/* First eleminate the first variable in all but the first equation by adding the appropriate multiple of the first equation to each of the other equations, then eliminate the second variable in all but the first two equations by adding the appropiate multiple of the second equation to each of the third throught Nth equtions, then eliminatie the third variable in all but the first three equations, etc. th eliminate the i th variable in the j th equaiton we multiply the i th equation by a(ji)/a^(ii) and subtract it from the j th equation. this process is more succinctly described by the following code fragment: */
