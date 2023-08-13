#include <stdio.h>

void rev_sequence(int a)
{
	printf("%d ",a%10);
	
	if(a/10>0)
	{
		rev_sequence(a/10);
	}
	
}

int main()
{
	int a;
	scanf("%d",&a);
	rev_sequence(a);
	return 0;
}
