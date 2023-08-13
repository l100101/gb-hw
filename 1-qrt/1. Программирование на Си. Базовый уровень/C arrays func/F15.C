#include <stdio.h>

int mod_max(int *arr, int len)
{
	int m=arr[0], count=0;

	for(int i=0; i<len; i++)
		if(arr[i]>m) m=arr[i];

	for(int i=0; i<len; i++)
		if(-arr[i]>m) count++;

	return count;
}


int main()
{
	int len=10, arr[len];
	
	for(int i=0;i<len;i++)
		scanf("%d",&arr[i]);

	printf("%d",mod_max(arr,len));

	return 0;
}

