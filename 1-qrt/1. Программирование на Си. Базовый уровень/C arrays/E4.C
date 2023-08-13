#include <stdio.h>

int arr[10]={};

int main()
{
	for(int i=0; i<10; ++i)
	{
		scanf("%d",&arr[i]);
	}
	
	int max_1=arr[0];
	int num_1=0	;
	int max_2=arr[9];
	
	for(int i=0; i<9;++i)
	{
		if(arr[i]>max_1)
		{
			max_1=arr[i];
			num_1=i;
		}
	}
	
	for(int i=9; i>=0;--i)
	{
		if(arr[i]>max_2 && i!=num_1)
		max_2=arr[i];
	}
	
	printf("%d",max_1 + max_2 );
	return 0;
}
