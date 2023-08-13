#include <stdio.h>

int main(int argc, char **argv)
{
	int a[5]={};
	int m=0;
	

	
	for (int i=0; i<=4; ++i)
	{
		scanf("%d",&a[i]);
		
//		m = ( i<1) ? m=a[i] : m<a[i] : ? m : a[i]  ;
	m = (i<1) ? a[0] : (a[i]<m) ? a[i] : m ); 
	}
	printf("%d",m);
	
	return 0;
}

 
