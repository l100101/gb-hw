#include <stdio.h>


int arr[12]={};
float sum=0;

int main()
{
	for(int i=0; i<12; ++i)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<12;++i)
	{
		sum+=arr[i];
	}
	
	printf("%.2f",sum/12 );
	return 0;
}
