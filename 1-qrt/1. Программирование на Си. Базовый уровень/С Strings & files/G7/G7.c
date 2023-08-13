#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 1000

void input(char *string, int *nums)
{
	FILE *in;
//	int c=0, i=0;
	in = fopen("input.txt", "r");
	fscanf(in, "%[^\n] \n", string  );
	
	printf ("%s \n", string);
	
	int a=0;
	while(string[a]!='\0')// идём до конца строки
	{
		if(string[a]>='0' && string[a]<='9' && string[a+1]>='0' && string[a+1]<='9')
		{
			printf ("1! %d \n", string[a]);
			
			string[a]-='0';
			string[a+1]-='0';
			
			printf ("2! %d \n", string[a]);
			
			string[a]*=10;
			string[a]+=string[a+1];
			
			printf ("3! %d \n", string[a]);
		}
															//НИ	чего не работает(
																

		a++;
//		printf ("%d ", a);
	}
	
		printf ("\n ");
	/*
	while ( (c=fgetc(in))!=EOF ) {
		
		if(c>='0' && c<='9')
		{
			printf("c-'0'=%d %c\n", c-'0',c );
			
			nums[i++]= c-'0';
		}
		if(c  >='0' && c<='9')
	}
	*/
	fclose(in);
}

void output(int nums)
{
	FILE *out;
	out = fopen("output.txt", "w");
	
	
	
//	fprintf(out, res ? "YES" : "NO");

	fclose(out);
}

int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS];
	int nums[MAXELEMENTS];
	input(stringFile, nums);
	

//	output(nums);
	return 0;
}
