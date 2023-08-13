#include "temp_functions.h"
#include <stdio.h>

#include <string.h>
#include <math.h>//для pow(a,b);

int caseM(char* str)//строку в число
{
	int nmonth=0;
	
	for(int i=0;i<strlen(str); i++)
		nmonth=nmonth*pow(10,i)+(str[i]-'0');

	return nmonth;
}

void cgangeIJ(struct sensor* info,int i,int j)
{
struct sensor temp;
	temp=info[i];
	info[i]=info[j];
	info[j]=temp;   
}
//упорядочивающую его по неубыванию температуры
void SortByT(struct sensor* info,int n)
{
	for(int i=0; i<n; ++i)
		for(int j=i; j<n; ++j)
			if(info[i].t>=info[j].t)
				cgangeIJ(info,i,j);
}
unsigned int DateToInt(struct sensor* info)
{
	return info->year << 16 | info->month << 8 |
		   info->day;
}
//упорядочивающую его по дате
void SortByDate(struct sensor* info,int n)
{
	for(int i=0; i<n; ++i)
		for(int j=i; j<n; ++j)          
			if(DateToInt(info+i)>=DateToInt(info+j))
				  cgangeIJ(info,i,j);            
}
void AddRecord(struct sensor* info,int number,
uint16_t year,uint8_t month,uint8_t day,int8_t t,int8_t h,int8_t m)
{
	info[number].year = year;
	info[number].month = month;
	info[number].day = day;
	info[number].t = t;
	info[number].hour = h;
	info[number].minute = m;
}
int AddInfo(struct sensor* info)
{
int counter=0;  
	AddRecord(info,counter++,2021,9,16,9,4,20);
	AddRecord(info,counter++,2022,10,2,-9,12,59);
	AddRecord(info,counter++,2021,1,7,8,11,11);
	AddRecord(info,counter++,2021,8,8,27,10,28);
	AddRecord(info,counter++,2021,9,16,19,11,14);
	AddRecord(info,counter++,2022,11,2,-9,12,57);
	AddRecord(info,counter++,2021,1,7,16,16,45);
	AddRecord(info,counter++,2021,9,5,1,10,8);
	return counter;
}

float averageMonthlyTemperature(struct sensor* info,int n,int nmonth )//на входе номер месяца
{
	float count=0;
	float sum=0;
		for(int i=0; i<n; i++)
		{
			if (info[i].month==nmonth)
			{
				count++;
				sum+=info[i].t;
			}
		}
	return sum/count;
}

int minMonthlyTemperature(struct sensor* info,int n, int nmonth)
{
	int min=100;
		for(int i=0; i<n; i++)
		{
			if (info[i].t<min && info[i].month == nmonth)
				min=info[i].t;
		}
//		printf(" min %d ", min);
	return min;
}

int maxMonthlyTemperature(struct sensor* info,int n, int nmonth)
{
	int max=-100;
		for(int i=0; i<n; i++)
		{
			if (info[i].t>max && info[i].month == nmonth)
				max=info[i].t;
		}
	return max;
}

float averageYearthlyTemperature(struct sensor* info,int n,int nyear)
{
	float count=0;
	float sum=0;
		for(int i=0; i<n; i++)
		{
			if (info[i].year==nyear)
			{
				count++;
				sum+=info[i].t;
//				printf("sum %d\n", sum);
			}
		}
	return sum/count;
}

int minYearthlyTemperature(struct sensor* info,int n, int nyear)
{
	int min=100;
		for(int i=0; i<n; i++)
		{
			if (info[i].t<min && info[i].year==nyear)
				min=info[i].t;
		}
	return min;
}
int maxYearthlyTemperature(struct sensor* info,int n, int nyear)
{
	int max=-100;
		for(int i=0; i<n; i++)
		{
			if (info[i].t>max && info[i].year==nyear)
				max=info[i].t;
		}
	return max;
}

void print(struct sensor* info,int number)
{
printf("year |month|max t month | min t month | average t month | max t year | min t year | average t year|\n");
printf("_____|_____|____________|_____________|_________________|____________|____________|_______________| \n");
for(int y=2008;y<2023;y++)
	{
		for(int n=1;n<=12;n++)
			{
				for(int i=0;i<number;i++)
					{
					if(n==info[i].month && info[i].year == y )
						{
						printf("%04d | %02d  |    %02d      |      %03d    |     %0.2f       |     %02d     |    %03d     |    %0.2f      |\n",    
						info[i].year,
						info[i].month,
						maxMonthlyTemperature(info,number,info[i].month),
						minMonthlyTemperature(info,number,info[i].month),
						averageMonthlyTemperature(info,number,info[i].month),
						maxYearthlyTemperature(info,number,info[i].year),
						minYearthlyTemperature(info,number,info[i].year),
						averageYearthlyTemperature(info,number,info[i].year)
						);
						printf("_____|_____|____________|_____________|_________________|____________|____________|_______________| \n");
						break;
						}
					}
			}
	}
}

void printOnly(struct sensor* info,int number, int only)
{
printf("year |month|max t month | min t month | average t month | max t year | min t year | average t year|\n");
printf("_____|_____|____________|_____________|_________________|____________|____________|_______________| \n");
for(int y=2008;y<2023;y++)
	{
		for(int i=0;i<number;i++)
			{
				if(info[i].month==only && info[i].year == y)
					{
						printf("%04d | %02d  |    %02d      |      %03d    |     %0.2f       |     %02d     |    %03d     |    %0.2f      |\n",    
						info[i].year,
						info[i].month,
						maxMonthlyTemperature(info,number,info[i].month),
						minMonthlyTemperature(info,number,info[i].month),
						averageMonthlyTemperature(info,number,info[i].month),
						maxYearthlyTemperature(info,number,info[i].year),
						minYearthlyTemperature(info,number,info[i].year),
						averageYearthlyTemperature(info,number,info[i].year)
						);
						printf("_____|_____|____________|_____________|_________________|____________|____________|_______________| \n");
						break;
					}
			}
	}
}

