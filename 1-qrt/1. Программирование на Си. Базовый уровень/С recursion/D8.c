#include <stdio.h>


void atob(int a,int b)
{
	printf("%d ",a);
	if (a>b)
	{
		atob(a-1,b);
	}else if(a<b)
	{
		atob(a+1,b);
	}
}


int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	atob(a,b);
	return 0;
}
