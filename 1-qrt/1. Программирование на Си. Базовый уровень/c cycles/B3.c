//	Пример: реализация задания B3 с помощью функции.
//	 Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b. 
#include <stdio.h>

int mod(int num)
{
	
	if (num<0)
		{
			num=-num;
		}
	return num;
}

int main()
{
	int a, b;
	
	do
	{
		scanf("%d%d",&a,&b);
		a=mod(a);
		b=mod(b);
	}
	while(a >100 || b>100);
	
	for (int i=a;i<=b;++i)
	{
		printf("%d ",i*i);
		
	}
	
	return 0;
}
