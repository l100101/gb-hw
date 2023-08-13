#include <stdio.h>


int sum_digits(int n)
{
	int sum = n%10;
	
	if(n/10>0)
	{
		sum+=sum_digits(n/10);
		return sum;
	}
	else
	{
	return n%10;
	}
}

int is_prime(int n, int delitel)
{
	n%
	
	
	return 0;
}
int main()
{
	int a, b;
	scanf("%d",&a);
	is_prime(a,b);
	return 0;
}
