#include <stdio.h>

int nums[10];//Сколько раз встречается цифра 0-9 в числе?

void printNums(long long a)
{
	int count=0;
	
	do
	{
		nums[a%10]++;
		a/=10;
		count++;
	}
	while(a);
	
	for(int i=0; i<=9; ++i)
	{
		if(nums[i]>0)
			printf("%d %d \n", i, nums[i]);
	}
	
}

int main()
{
	long long a;
	scanf("%I64d",&a);
	printNums(a);
	return 0;
}
