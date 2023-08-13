#include <stdio.h>


int arr[10]={};
int cache[4]={};


int main()
{
	int third = 12/3;
	
	
	
	for(int i=0; i<12; ++i)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(int i=11; i>=0; --i)
	{
		if (i>third*2-1)
		{
			cache[i%third]=arr[i];
		}
		
		if(i>=third) arr[i]=arr[i-third];
		
		if(i<third)
		{
			arr[i]=cache[i];
		}
		
	}

	for(int i=0; i<12; ++i)
	{
		printf("%d ", arr[i]);
	}


	
	return 0;
}
