#include <stdio.h>

int bin(int a)
{
	if(a>=2)
	{
		bin(a/2);
	}
	printf("%d", a%2);
	return 0;

}

int main()
{
	int a;
	scanf("%d",&a);
	bin(a);
	return 0;
}
