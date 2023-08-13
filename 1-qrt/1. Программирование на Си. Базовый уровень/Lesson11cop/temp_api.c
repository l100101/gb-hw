#include "temp_api.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>

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
	AddRecord(info,counter++,2022,9,2,-9,12,59);
	AddRecord(info,counter++,2021,1,7,8,16,45);
	AddRecord(info,counter++,2021,9,5,1,10,8);
	return counter;
}

void averageMonthlyTemperature(struct sensor* info,int n, int nmonth)//на входе номер месяца
{
	int count=0;
	int sum=0;
		for(int i=0; i<n; i++)
		{
			if (info[n].month==nmonth)
			{
				count++;
				sum+=info[n].t;
			}
		}
	printf("%d", sum/count);
}


void print(struct sensor* info,int number)
{
printf("===================================\n");        
	for(int i=0;i<number;i++)
		printf("%04d-%02d-%02d t=%3d | time %2d:%2d \n",    
			info[i].year,
			info[i].month,
			info[i].day,
			info[i].t,
			info[i].hour,
			info[i].minute
		);
}
