#include <stdio.h>

int input()
{
	FILE *in;
	int n=0;
	in = fopen("input.txt", "r");
	fscanf(in, "%d", &n);
	fclose(in);
	return n;
}
void output(int n)
{
	FILE *out;
	out = fopen("output.txt", "w");
	char sym='A';
	
	for(int i = 0; i <  n; i++)
	{
		if(i%2==0)
			fprintf(out, "%c", sym++);
		else
			fprintf(out, "%d", i%8+1);
	}
	fclose(out);
}
int main()
{
	int n=input();
	output(n);
	return 0;
}
