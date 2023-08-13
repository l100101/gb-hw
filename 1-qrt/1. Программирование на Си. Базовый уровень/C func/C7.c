#include <stdio.h>

int power(int n, int p)
{
	if(p==0) 
	{
		return 1;
	}else if(p==1)
	{
		 return n;
	}else
	{
		int result=n;
		for(int i=2; i<=p; ++i)
		{
			result*=n;
		}
		return result;
	}
	
}

int transfer(int n,int p)
{
	int num=0;
	int i=0;
	do
	{
		num+=(n%p)*power(10,i);
		n=n/p;
		i++;
	}while(n!=0);
	
	return num;
}

int main()
{
	int n;
	int p;
	do
	{
		scanf("%d%d",&n,&p);
	}while(n<0 && p<2 && p>9);
	
	n=transfer(n,p);
	
	printf("%d",n);
	
	return 0;
}
