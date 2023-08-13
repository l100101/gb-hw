#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 100

int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS]={0};
	
	FILE *in;
	in = fopen("input.txt", "r");
	FILE *out;
	out = fopen("output.txt", "w");
	int i=0;
	while(fscanf(in, "%s", stringFile) == 1)
	{
		i++;
		fprintf(out, "%d%s\n", i, stringFile);
	}


	return 0;
}
