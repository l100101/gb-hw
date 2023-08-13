#include <stdio.h>


void string_rar(char *s, int len)
{
	char prev_sym=0;
	int count=0, count_res=0;
	
	for(int i=0; i<=len; i++)
	{
		if(s[i]==prev_sym)
			count++;
		else
		{
			count_res=count;
			if (i>0) 
				printf("%c%d", prev_sym, count_res);
			count=1;
		}
		prev_sym=s[i];
	}
}

int main()
{
	int len=1000;
	char s[len], c;
	int i=0;
	while( (c=getchar())!='.' )
		s[i++]=c;
	s[i]='\0';
	
	string_rar(s, i);
	
	
	return 0;
}

