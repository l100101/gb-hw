#include <stdio.h>

int contain = 0;//содержится ли больше 2 цифр "9" ? (0/1)
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
		if(a_copy%10==9)	//и записываем в массив её наличие 
			{
				contain++;
			}
		i--;
		a_copy/=10;
	}
	
	contain==1 ? printf("YES") : printf("NO");  
	
	

	return 0;
}
