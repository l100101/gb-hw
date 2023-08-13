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

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",sum_digits(a));
	return 0;
}
