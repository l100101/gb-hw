#include <stdio.h>

int sum(int n)
{
	int result = 0;
	for(int i = 0; i<=n ; i++)
	{
		result +=i;
	}
	return result;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d",sum(n));
	return 0;
}
