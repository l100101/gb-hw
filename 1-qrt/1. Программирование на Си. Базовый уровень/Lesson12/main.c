#include <stdio.h>
#include "temp_api.h"
#include <unistd.h>
#include <string.h>
#include <math.h>//для pow(a,b);
#define SIZE 30

int main(int argc, char *argv[])
{
int rez=0;
opterr=0;
int only =0;//номер месяца
int nyear =2021;//номер года

while ( (rez = getopt(argc,argv,"hf:m:")) != -1)
	{
		switch (rez)
		{
			case 'h': printf("\nlist of keys:\n 	-h for help \n 	-f <filename.csv> | input file \n 	-m <month number> | statistics for this month\n"); break;
			case 'f': printf("Not released| found argument \"f = %s\".\n",optarg); break;
			case 'm': printf("statistics for month %s:\n",optarg);only=caseM(optarg);break;
			case '?': printf("Error found ! | -h for help \n");break;
		};
	};
printf("______________________________________________________________________________________________________________________\n");


struct sensor info[SIZE]; 
int number=AddInfo(info);

	if(!only)
		print(info, number);
	else
		printOnly(info, number, only);
	
//	printf("\nSort by t\n");
//	SortByT(info,number);   
//	print(info,number);
//	printf("\nSort by date\n");
//	SortByDate(info,number);
//	print(info,number);

/*
	printf("\nAverageMonthlyTemperature\n");
	if(!nmonth)
	{
		printf("\n nmonth %d\n", nmonth);
		for(nmonth=1; nmonth<=12; nmonth++)
		{
			averageMonthlyTemperature(info,number, nmonth);//на входе номер месяца
			minMonthlyTemperature(info,number,nmonth);
			maxMonthlyTemperature(info,number,nmonth);
		}
	}
	else
	{
		averageMonthlyTemperature(info,number, nmonth);
		minMonthlyTemperature(info,number,nmonth);
		maxMonthlyTemperature(info,number,nmonth);
	}
*/

//	AddRecord(info,0,0,9,16,45,4,22);
//	print(info,number);
	return 0;
}

