#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 1000

void input(char *string)
{
	FILE *in;
	in = fopen("input.txt", "r");
	int c=0;
	int i=0;

	while ( (c=fgetc(in))!=EOF )
	{
		if(c!=' ')//игнорируем пробелы при записи
		{
//			printf("%c \n", c);
			string[i++]=c;
		}
	}
	
	fclose(in);
}

int is_palindrome(char *string)
{

	int alphabet[27]={0};
	int countOdds=0;
	int len=strlen(string);
	
	for(int i=0; i<len; i++)
	{
//		printf("%c \n ",string[i]);
		alphabet[string[i]-97]++;
	}
	
	for(int i=0; i<27; i++)
	{
//		printf("%d ",alphabet[i]);
		if(alphabet[i]%2)
			countOdds++;
	}
	if (countOdds==1)
		return 1;
	
	return 0;
}


int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS]={0};

	input(stringFile);

	if (is_palindrome(stringFile))
		printf("YES");
	else
		printf("NO");


	return 0;
}
