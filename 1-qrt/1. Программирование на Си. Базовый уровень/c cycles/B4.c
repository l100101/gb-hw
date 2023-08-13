#include <stdio.h>
int main()
{
	int a,i=0;
	
	scanf("%d",&a);
	do{
		a=a/10;
		i++;
	}
	while(a>0);

	printf(	i==3? "YES" : "NO");
	return 0;
}
