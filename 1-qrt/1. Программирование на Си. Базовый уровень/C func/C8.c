#include <stdio.h>
int main()
{
	char c;
	while( (c=getchar())!='.') //спец символ новой строки
		if(c>='a' && c<='z') //все символы лежат подряд ‘a’=97, ‘b’=98, ‘c’=99, ...
				 putchar('A' + (c-'a'));
		else
				 putchar(c);
	return 0;
}
