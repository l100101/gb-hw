#include <stdio.h>

int arr[12]={};
int sum=0;



int main()
{
	for(int i=0; i<12; ++i)
	{
		scanf("%d",&arr[i]);
	}
	
	
	
	for(int i=0; i<=9;++i)
	{
		sum+=arr[i];
	}
	
	
	printf("%d",sum );
	return 0;
}
