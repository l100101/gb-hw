#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 1000

int input(char *string, char *longWord, int *maxLen)
{
	FILE *in;
	in = fopen("input.txt", "r");
	int max=strlen(string);
	int countMaxs=0;
	
	while(fscanf(in, "%s", string)==1)
		{
			if(strlen(string)>=max)
			{
				strcpy(longWord,string);
				max=strlen(string); 
				maxLen[countMaxs++]=max;
				printf("if! %s %d %d\n", longWord, max, countMaxs);
			}
		}
	fclose(in);
	return 0;
}

void output(char *longWord)
{
	FILE *out;
	out = fopen("output.txt", "w");

	printf("%s", longWord);
	fprintf(out, "%s", longWord);
	fclose(out);
}

int equals(int *maxLen)//Проверка на одинаковые длины
{
	int max=maxLen[0];
	for(int i=1; maxLen[i]!=0; i++)
	{
		if (maxLen[i]==max)
		{
			printf("%d", max);
			return 1;
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS]={0};// Тут храним все слова
	char longWord[MAXELEMENTS]={0};//Сюда записываем самое длинное
	int maxLen[MAXELEMENTS]={0};//Здесь максимальные длины 
	
	input(stringFile, longWord, maxLen);
	
	if (!equals(maxLen))//Если одинаковых максимальных длин нет
	{
		output(longWord);
	}
	
	return 0;
}
