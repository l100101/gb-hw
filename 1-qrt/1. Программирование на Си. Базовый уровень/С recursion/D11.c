#include <stdio.h>

int bin(int a)//5//2
{
	if(a<2)
	{
		return a%2;//1
	}
	
	int sum=(a%2)+;//0//0//0
	
	
	else
	{
		return sum+=bin(a/2);//0+bin(2)//0+bin(1)	//0+1=1//
	}
	
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",bin(a));
	return 0;
}
