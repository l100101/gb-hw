#include <stdio.h>

int arr[10]={};

int main()
{
	for(int i=0; i<10; ++i)
	{
		scanf("%d",&arr[i]);
		
	}
	
	int max=0;
	int max_2=0;
	
	for(int i=0; i<10;++i)
	{
		if(arr[i]>max)	max=arr[i];
		if(arr[i]>max_2 && arr[i]<max)	max_2 = arr[i];
		printf("%d %d ",max, arr[i] );
		printf("%d\n",max_2 );

	}
	
	
	printf("%d",max + max_2 );
	return 0;
}
