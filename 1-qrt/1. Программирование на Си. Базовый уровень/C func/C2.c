//	Пример: Нахождение расстояния от нуля до точки на отрезке
//	 Ввести координату любой точки на отрезке, чтобы узнать расстояние от начала до неё 
#include <stdio.h>

int mod(int num)//модуль числа
{
	if (num<0)
		{
			num=-num;
		}
	return num;
}

int power(int n, int p) 
{
	if (p==0) return 1;//число в 0 степени = 1
	if (p==1) return n;//число в 1 степени = число
	
	int result=n;
	
	for(int i=1;i<p;i++)
	{
		result *= n;
	}
	return result;
}

int main()
{
	int n,p;
	do
	{
		scanf("%d%d",&n, &p);
	}while(mod(n)>1000 || mod(p)>1000 || p<0);//если ввод некорректный, то ввести ещё раз
	
	printf("%d",power(n,p));
	return 0;
}
