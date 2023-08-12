/* an interesting special case of a band matrix is a "tridiagonal" matrix in which only elements directly on, directly above, or directly below the diagonal are non zero*/

/* forward elimination and backward substitution each reduce to a single for loop; */

for (i = 1; i < N; i++)
{
	a[i+1][N+1] -= a[i][N+1]*a[i+1][i]/a[i][i]; 
	a[i+1][i+1] -= a[i][i+1]*a[i+1][i]/a[i][i]; 
}
for (j = N; j >= 1; j--)
	x[j] = (a[j][N+1]-a[j][j+1]*x[j+1])/a[j][j]; 
