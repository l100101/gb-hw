#include <stdio.h>


int PosMin(int *arr,int len)
{
	int min=arr[0],i,pos=0;
	for (i = 1; i < len; i++)
		if (min > arr[i]) 
		{
			min = arr[i];
			pos = i;
		}
	return pos; 
}


int PosMax(int *arr,int len)
{
	int max=arr[0],i,pos=0;
	for (i = 1; i < len; i++)
		if (max < arr[i]) 
		{
			max = arr[i];
			pos = i;
		}
	return pos; 
}
void ChangeMinMax(int *arr,int len)
{
	int _PosMin = PosMin(arr,len);
	int _PosMax = PosMax(arr,len);
	//printf("%d,%d\n",_PosMin,_PosMax);
	int temp = arr[_PosMin];
	arr[_PosMin] = arr[_PosMax];
	arr[_PosMax] = temp;
}

int main()
{
	int arr[20];
	
	for(int i=0; i<10; ++i)
	{
		scanf("%d",&arr[i]);
	}
	
	ChangeMinMax(arr,10);
		
	for(int i=0; i<10; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
