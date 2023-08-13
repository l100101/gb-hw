#include <stdio.h>


int arr[12]={};

int main()
{
	for(int i=0; i<12; ++i)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(int i=0; i<12;++i)
	{
		int swap=0; 
		int third = 12/3;//треть
		
		if(i<third/2)//работа с первой третью
		{
			swap=arr[i];
			
			arr[i]=arr[third-1-i];
			arr[third-1-i]=swap;
		}
		
		else if(i>third-1 && i<12/2)//вторая треть. Если больше одной трети, но меньше полутора третьих(половины целого), то меняем 
		{
			swap=arr[i];
			
			arr[i]=arr[third*2-1-i%third];//отступаем от конца второй трети число, равное номеру итерации внутри текущей трети
			arr[third*2-1-i%third]=swap;
		}
		
		else if(i>third*2-1 && i<12-third/2) //последняя треть/ Если > двух третей, но < двух с половиной третей 
		{
			swap=arr[i];
			
			arr[i]=arr[12-1-i%third];
			arr[12-1-i%third]=swap;
		}
		
		//Может быть не очень красиво, зато одним циклом получилось 
		
		printf("%d ", arr[i]);
	}

	return 0;
}
