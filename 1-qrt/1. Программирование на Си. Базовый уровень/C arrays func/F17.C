#include <stdio.h>

void matrix_trace(int *arr,int n)
{
	int sum=0;
	for (int i = 0; i < n; i++)
		sum+=arr[n*i+i];

	printf ("%d \n",sum);
}

int main()
{
	int n=5, arr[n][n];

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);

	matrix_trace(&arr[0][0],n);
	
	return 0;
}

