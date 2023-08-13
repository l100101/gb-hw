#include <stdio.h>

int func(int x)
{
	if(x>=-2 && x<2)
		{
			return x*x;
		}
		else if(x>=2)
		{
			return x*x+4*x+5;
		}
		else if(x<-2)
		{
			return 4;
		}
		
	return x;
}

int main()
{
	int x=0;
	int max=0;
	do
	{
		scanf("%d",&x);
		x=func(x);
		if(x>max)
		{
			max=x;
		}
	}while(x!=0);
	
	printf("%d",max);
	
	return 0;
}
