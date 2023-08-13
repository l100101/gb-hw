#include <stdio.h>
#include "temp_functions.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
//#define SIZE 600000

int main(int argc, char *argv[])
{
int rez=0;
opterr=0;
int only =0;//номер месяца
char name[] = "temperature.csv";// имя файла 

while ( (rez = getopt(argc,argv,"hf:m:")) != -1)
	{
		switch (rez)
		{
			case 'h': printf("Default name input file = \"temperature.csv\" \nlist of keys:\n 	-h for help \n 	-f <filename.csv> | input file \n 	-m <month number> | statistics for this month\n"); break;
			case 'f': printf("file = \"%s\"\n",optarg); strcpy(name,optarg) ;break;
			case 'm': printf("statistics for month %s:\n",optarg);only=caseM(optarg);break;
			case '?': printf("Error found ! | -h for help \n");break;
		};
	};

	//struct sensor info[SIZE];
	struct sensor *info = malloc(12000000*sizeof(int));
	FILE *open;
	open = fopen(name, "r"); 
	if(open==NULL) 
		return 1;
	int Y,M,D,H,Mi,T;//Год, месяц, день,температура, часы, минуты
	int r;			//кол-во считанных значений
	int number=0;	//кол-во структур
	int strErr=0;	//номер строчки с ошибкой  
	
	
	while((r = fscanf(open, "%d;%d;%d;%d;%d;%d",&Y,&M,&D,&H,&Mi,&T))>0)
	{
		if(r<6)//Ошибка 
		{
			char s[20],c;
			r = fscanf(open, "%[^\n]%c", s,&c); 
			printf(" CHECK FILE | ERROR IN LINE %d! (\"%s\") \n",number+(++strErr),s);
		}
		else
		{
			AddRecord(info,number++,Y,M,D,T,H,Mi);//Год, месяц, день,температура, часы, минуты
		//	printf("%d|%d = %d;%d;%d;%d;%d;%d\n",number, r,Y,M,D,H,Mi,T);
		}
	}
	
//	int number=AddInfo(info);//загрузка тестовых данных  

printf("___________________________________________________________________________________________________\n");

	if(!only)
		print(info, number);
	else
		printOnly(info, number, only);

	return 0;
}

