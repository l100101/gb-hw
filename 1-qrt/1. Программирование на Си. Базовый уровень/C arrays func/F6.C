#include <stdio.h>

int equal(int *arr, int len)
{
	for(int i=0; i<len-1; i++)
	{
		for(int j=i+1; j<len; j++)
		{
			if(arr[i]==arr[j])
				{
					return 1;
				}
		}
	}
	
	return 0;
}

int main()
{
	int len=100, arr[len];
	
	for(int i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf(equal(arr,len) ? "YES" : "NO");
	
	return 0;
}
