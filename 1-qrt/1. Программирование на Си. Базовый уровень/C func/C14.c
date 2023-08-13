#include <stdio.h>



int odd(int a)
{
	int sum=0;
	while(a>0)
	{
		sum+=a%10; //+6+3+1
		a/=10;//13/1
	}
	
	return sum;
}

int main()
{
	int a;
	scanf("%d",&a);
	a=odd(a);
	printf(( a%2==0 ? "YES" : "NO"));

	return 0;
}
