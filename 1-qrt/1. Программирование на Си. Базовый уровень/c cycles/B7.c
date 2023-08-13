#include <stdio.h>

int numbers[10] = {0,0,0,0,0,0,0,0,0,0};//какое количество цифр от 0 до 9 содержится в числе?
int contain = 0;//содержится ли больше 2 одинаковых цифр? (0/1)
int main()
{
	int a, a_copy,i=0;
	
	scanf("%d",&a);
	
	a_copy=a;
	
	while(a>0)	//считаем количество цифр в "a", записываем его в "i"
	{
		a=a/10;
		i++;
	}

	while(i>0)
	{
		for(int j=0; j<=9; j++)	//проверяем, какая цифра содержится в разряде
		{
			if(a_copy%10==j)	//и записываем в массив её наличие 
			{
				numbers[j]++;
			}
		}
		i--;
		a_copy/=10;
	}
	
	for(int o=0;o<=9; o++)
	{
		if(numbers[o]>1)
			{
				contain=1;
				break;
			}
	}
	contain ? printf("YES") : printf("NO");  
	
	

	return 0;
}
