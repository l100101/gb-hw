#include <stdio.h>

 void reverse_string() 
 {
	char a;
	scanf("%c",&a);
	
	if(a!='.')
	{
		reverse_string();
		printf("%c",a);
	}
 }


int main()
{
	reverse_string();
	return 0;
}
