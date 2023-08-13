#include <stdio.h>

void rar(int *arr, int len)
{
	int result[len];
	int num=0;
	
	int firstNum=0;
	
	
	for(int i=firstNum; i<len; i++)
	{
		result[i]=0;
		
		int count=1;
		
		if(arr[0]==1 && i==0)
		{
			result[0]=0;
		}
		
		while(arr[i]==arr[i+1])
		{
			i++;
			count++;
		}
		
		result[num]=count;
		num++;
	}
	
	
	int i=0;
	while(result[i])
	{
		printf("%d ",result[i]);
		i++;
	}
	

}

int main()
{
	int len=100, arr[len];
	
	for(int i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	rar(arr,len);
	
	return 0;
}
