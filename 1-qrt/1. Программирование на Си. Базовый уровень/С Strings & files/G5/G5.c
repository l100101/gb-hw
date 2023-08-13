#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 1000

void input(char *string)
{
	FILE *in;

	in = fopen("input.txt", "r");
	fscanf(in, "%[^\n]", string);
	fclose(in);
}

void output(char *str)
{
	FILE *out;
	out = fopen("output.txt", "w");
	int len = strlen(str);
	for(int i = 0; i <  len; i++)
	{
		if(str[i] == 'a' || str[i] == 'A')
			str[i]++;
		else if(str[i] == 'b' || str[i] == 'B')
			str[i]--;
	}
	
	for(int i = 0; i <  len; i++)
		fprintf(out, "%c", str[i]);
		
	fclose(out);
}
int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS];
	input(stringFile);
	
	output(stringFile);
	return 0;
}
