#include <stdio.h>


void evenOdd(int *num, int size)
{
	int result[20];
	int even=0;
	int odd=size/2;
	
	
	for (int i = 0; i < size ; i++)// Для всех элементов
	{
		if(num[i]%2==0 && i>0 )//если чётный 
		{
			int j=i-1;
			while(num[j]%2!=0 && j>0)
			{
				
				
			}
				//ищем чётный слева
		}

	}
	

}



int main()
{
	int arr[20];
	for(int i=0; i<20; ++i)
	{
		scanf("%d",&arr[i]);
	}
	
	evenOdd(arr,20);
	
	for(int i=0; i<20; ++i)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
