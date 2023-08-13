#include <stdio.h>
int main()
{
	int a, b,mod_a, mod_b;
	
	do
	{
		scanf("%d%d",&a,&b);
		mod_a=(a>0) ? a : -a;
		mod_b=(b>0) ? b : -b;
	}
	while(mod_a >100 && mod_b>100);
	
		printf("%d ",a*a+b*b);
		
	return 0;
}
