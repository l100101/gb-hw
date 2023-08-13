#include <stdio.h>



void print_simple(int n)
{
	for(int i=2; n>i; )
	{
		n%i==0 ? n/=i : i++;
		printf("%d ",n);
	}
}

int main()
{
	int n;
	do
	{
		scanf("%d",&n);
	}while(n<0);
	
	print_simple(n);
	
	return 0;
}
