#include <stdio.h>


void swap(int *arr, int len)
{
	
	int min=arr[0];
	int max_neg=arr[0];
	int max_neg_i=0;
	
	for(int i=0; i<len; i++)//ищем минимальный 
	{
		if(arr[i]<min && arr[i]!=0 )
			min=arr[i];
	}
	
	max_neg=min;//больший отрицательый = наименьший
	
	for(int i=0; i<len; i++)
	{
		if(arr[i]<0 && arr[i]>max_neg)//между наименьшим и 0 находим  максимальный отрицательный и его индекс
		{
			max_neg=arr[i];
			max_neg_i=i;
		}
	}
	
	if(max_neg<0)
	{
		int temp=arr[max_neg_i];
		arr[max_neg_i]=arr[len-1];
		arr[len-1]=temp;
	}
	
	

}

int main()
{
	int arr[10];
	int len=10;
	
	for(int i=0; i<len; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	swap(arr, len);
	
		for(int i=0; i<len; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
