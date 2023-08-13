#include <stdio.h>

unsigned long long num(int n)
{
	unsigned long long int result=0;
	if(n==1) return 1;
	else
	{
		result=2*num(n-1);
	}
	return result;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%I64d",num(n));
	return 0;
}
