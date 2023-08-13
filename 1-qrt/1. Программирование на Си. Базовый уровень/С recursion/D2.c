#include <stdio.h>

int sum=0;

int rec(int a)
{

	sum+=a;
	if(a<=1)
	{
		return sum;
	}

	return rec(a-1);

}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",rec(a));
	return 0;
}
