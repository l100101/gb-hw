#include <stdio.h>

int numbers[10] = {0,0,0,0,0,0,0,0,0,0};//какое количество цифр от 0 до 9 содержится в числе?
int all_even = 1;//все ли цифры чётные? (0/1)
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
		if ((a_copy%10)%2==1) 
		{
			 all_even = 0; //цифра проверяемого разряда нечётная?
		}
		i--;
		a_copy/=10;
	}


	all_even ? printf("YES") : printf("NO");  
	
	
	return 0;
}
