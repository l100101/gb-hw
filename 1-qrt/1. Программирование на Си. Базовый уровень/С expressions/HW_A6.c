#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d", a>b?b:a,a>b?a:b);
	return 0;
}

 
