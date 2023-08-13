#include <stdio.h>

int arr[5]={};

int main()
{
	float mid=0;
	for(int i=0; i<5; ++i)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<5;++i)
	{
		mid+=arr[i];
	}
	printf("%.3f",mid/5);
	return 0;
}
