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

int palindrome(char *line)
{
	int len = strlen(line);
	for (int i = 0; i < len / 2; i++)
		if (line[i] != line[len - i - 1])
			return 0;
	return 1;
}

void output(int res)
{
	FILE *out;
	out = fopen("output.txt", "w");

	fprintf(out, res ? "YES" : "NO");

	fclose(out);
}

int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS];
	input(stringFile);
	
	output(palindrome(stringFile));
	return 0;
}
