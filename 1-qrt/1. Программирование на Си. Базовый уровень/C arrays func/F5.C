#include <stdio.h>

int max(int *arr, int len)
{
	int m=arr[0];
	for(int i=0; i<len; i++)
	{
		if(arr[i]>m) m=arr[i];
	}
	return m;
}

int main()
{
	int len=100, arr[len];
	
	for(int i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("%d",max(arr,len));
	
	return 0;
}
