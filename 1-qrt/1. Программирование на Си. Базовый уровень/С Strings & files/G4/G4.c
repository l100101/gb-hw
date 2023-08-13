#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 1000


void input(char *string)
{
	FILE *in;
	/*
	char word1[100];
	char word2[100];
	char sameSym[200];
	*/
	in = fopen("input.txt", "r");
	fscanf(in, "%[^\n]", string);
	fclose(in);
}
void output(char *str)
{
	FILE *out;
	out = fopen("output.txt", "w");
	int len = strlen(str)-1;
	for(int i = 0; i <  len; i++)
		if(str[i] == str[len])
			fprintf(out, "%d ", i);
	fclose(out);
}
int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS];
	input(stringFile);
	
	
	
	output(stringFile);
	return 0;
}
