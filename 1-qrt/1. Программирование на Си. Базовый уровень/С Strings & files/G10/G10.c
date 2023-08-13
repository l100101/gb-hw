#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 1000

int equal(int *arr, int len)// проверка на 2 одинаковых числа
{
	for(int i=0; i<len-1; i++)
	{
		for(int j=i+1; j<len; j++)
		{
			if(arr[i]==arr[j])
				{
					return 1;
				}
		}
	}
	
	return 0;
}

int input(char *string, char *longWord)
{
	FILE *in;
	in = fopen("input.txt", "r");
	int max=strlen(string);
	int maxLen[MAXELEMENTS]={0};//Здесь максимальные длины 
	int countMaxs=0;
	
	while(fscanf(in, "%s", string)==1)
		{
			if(strlen(string)>=max)
			{
				strcpy(longWord,string);
				max=strlen(string); 
				maxLen[countMaxs++]=max;
//				printf("if! %s %d %d \n", longWord, max, countMaxs);
			}
		}
	maxLen[countMaxs++]=0;
	
	fclose(in);
	
	return equal(maxLen, countMaxs);//Есть ли среди максимумов одинаковые?
}

void output(char *longWord)
{
	FILE *out;
	out = fopen("output.txt", "w");

	printf("%s", longWord);
	fprintf(out, "%s", longWord);
	fclose(out);
}



int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS]={0};// Тут храним все слова
	char longWord[MAXELEMENTS]={0};//Сюда записываем самое длинное
	

	
	if (!input(stringFile, longWord))//Если нет одинаковых максимумов
	{
		output(longWord);
	}
	
	
	return 0;
}
