#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 1000

void input(char *string)
{
	FILE *in;
	in = fopen("input.txt", "r");
	int c=0;
	int i=0;
	int ascii[127]={0};

	while ( (c=fgetc(in))!=EOF )
	{
		if(c!=' ')//игнорируем пробелы при записи
		{
			printf("%c \n", c);
			if(!ascii[c])//проверяем, встречался ли ранее
				string[i++]=c;
			ascii[c]++;
		}
	}
	for(int q=0; q<127; q++)
	{
		printf("%d %d\n",q, ascii[q]);
		
	}
	
	printf("i=%d \n", i);
	fclose(in);
}

void output(char *str)
{
	FILE *out;
	out = fopen("output.txt", "w");
	int len = strlen(str);
	for(int i = 0; i <len; i++)
		fprintf(out, "%c", str[i]);
	fclose(out);
}

int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS]={0};

	input(stringFile);
	output(stringFile);

	return 0;
}
