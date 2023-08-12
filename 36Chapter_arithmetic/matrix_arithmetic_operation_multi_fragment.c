/* Matrix multiplication is also straightforward. If 'r' is the product of 'p' and 'q' then element "r[i][j]" is the dot product of the "ith" row of 'p' with the "jth" column of 'q'. The dot product is simply the sum of the 'N' term by term multiplications */

for (i  = 0; i < N; i++)
	for (j = 0; j < N; j++)
		for (k = 0, r[i][j] = 0; k < N; k++)
			r[i][j] += p[i][k] * q[k][j]; 
