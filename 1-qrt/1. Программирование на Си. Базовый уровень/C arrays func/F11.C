#include <stdio.h>


minSum(int *arr, int len)
{
	
	int min1=arr[0], imin1=0;
	int min2=arr[1], imin2=1;
	
	
	for(int i=0; i<len; i++)
	{
		if (arr[i]<min1 && i!=imin2){
			min1=arr[i];
			imin1=i;
		}
	}
	
	for(int i=0; i<len; i++)
	{
		if (arr[i]<min2 && i!=imin1){
			min2=arr[i];
			imin2=i;
		}
	}
	
	printf("%d %d", imin1<imin2 ? imin1 : imin2, imin1<imin2 ? imin2 : imin1);
	
	return 0;
	
}


int main()
{
	int len=30;
	int arr[len];
	
	for(int i=0; i<len; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	minSum(arr, len);
	
	
	return 0;
}
