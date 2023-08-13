#include <stdio.h>


int factorial(int n)
{
	if (n>1)
	{
		n*=factorial(n-1);
	}

	return n;
}


int main()
{
	int n;
	do
	{
		scanf("%d",&n);
	}while(n>20);
	printf("%d",factorial(n));
	return 0;
}
