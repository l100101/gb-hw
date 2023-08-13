#include <stdio.h>



unsigned long nod(unsigned long a, unsigned long b)
{
	unsigned long result =1;
	
	for(unsigned long i=2; i<=(a>b ? a : b);++i)
	{
		if (a%i==0 && b%i==0)
		{
			result=i;
		}
	}
	return result;
}



int main()
{
	unsigned long a,b;
	do
	{
		scanf("%lu%lu",&a,&b);
	}
	while(a<0 && b<0);
	
	printf("%lu \n",nod(a,b));

	return 0;
}
