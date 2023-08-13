#include <stdio.h>
int main()
{
	int a, a_copy,i=0,sum=0;
	
	
	do
	{
		scanf("%d",&a);
	}while(a<0);
	
	a_copy=a;
	
	while(a>0)//считаем количество цифр внутри i
	{
		a=a/10;
		i++;
	}
	while(i>0)
	{
		sum+=a_copy%10;
		a_copy/=10;
		--i;
	}
	printf(	"%d ",sum );
	
	return 0;
}
