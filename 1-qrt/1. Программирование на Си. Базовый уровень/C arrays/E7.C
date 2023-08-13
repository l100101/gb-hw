#include <stdio.h>

int arr[10]={};
int swap=0; 

int main()
{
	for(int i=0; i<10; ++i)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(int i=0; i<10;++i)
	{
		
		if(i<2)
		{
			swap=arr[i];
			arr[i]=arr[4-i];
			arr[4-i]=swap;
		}
		
		if(i>4 && i<7)
		{
			swap=arr[i];
			arr[i]=arr[14-i];
			arr[14-i]=swap;
		}
		
		printf("%d ", arr[i]);
	}

	return 0;
}
