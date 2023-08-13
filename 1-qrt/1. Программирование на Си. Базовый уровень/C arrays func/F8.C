#include <stdio.h>

int max(int *arr, int len)
{
	int m=arr[0];
	for(int i=0; i<len; i++)
	{
		if(arr[i]>m ) m=arr[i];
	}
	return m;
}

int min(int *arr, int len)
{
	int m=arr[0];
	for(int i=0; i<len; i++)
	{
		if(arr[i]<m && arr[i]!=0 ) m=arr[i];
	}
	return m;
}

void findNumber(int *arr, int len, int min, int max)
{
	
	for(int j=min;j<=max; j++)
	{
		int finded=0;
		
		for(int i=0;i<len;i++)
		{
			if(arr[i]==j)
			{
				finded=1;
//				printf("%d %d %d %d\n",j, i, arr[i], finded );
			}
			
			if(i==len-1 && finded==0)
			{
				printf(/* notFinded*/ "%d \n",j);
				
			}
		}
	}
}

int main()
{
	int arr[1000];
	int i=0;
	int len;
	
	do
	{
		scanf("%d", &arr[i]);
//		printf("arr[%d]=%d \n",i,arr[i]);
	}
	while(arr[i++]!=0);
	
	len=i;
	
	findNumber(arr, len, min(arr,len), max(arr,len));
	
	
	return 0;
}
