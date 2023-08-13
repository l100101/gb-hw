#include <stdio.h>
#include "temp_api.h"

#define SIZE 30


int main(void)
{
struct sensor info[SIZE]; 
int number=AddInfo(info);
int nmonth=9;

	print(info,number);
	printf("\nSort by t\n");
	SortByT(info,number);   
	print(info,number);
	printf("\nSort by date\n");
	SortByDate(info,number);
	print(info,number);

	printf("\nMonthlyAverageTemperature\n");
	averageMonthlyTemperature(info,number,nmonth);
	//print(info,number);

	return 0;
}


