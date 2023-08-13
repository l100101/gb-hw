#include <stdio.h>


int rec(int a)//5//4//3
{
	printf("%d ",a);//5//4
	if(a<=1)
	{
		return 1;
	}
	return rec(a-1);//4//3
	
}


int main()
{
	int a;
	scanf("%d",&a);
	rec(a);
	return 0;
}
