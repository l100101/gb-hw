#include <stdint.h>
#ifndef TEMP_API_H
#define TEMP_API_H

#define SIZE 30
struct sensor {
	uint8_t day;
	uint8_t month;
	uint16_t year;
	uint8_t hour;
	uint8_t minute;
	int8_t t;
};

int caseM(char* arg);

void AddRecord(struct sensor* info,int number,uint16_t year,uint8_t month,uint8_t day,int8_t t,int8_t h,int8_t m);

void SortByT(struct sensor* info,int n);

void SortByDate(struct sensor* info,int n);

int AddInfo(struct sensor* info);

void print(struct sensor* info,int number);

void printOnly(struct sensor* info,int number, int nmonth);

int averageMonthlyTemperature(struct sensor* info,int n, int nmonth);

int minMonthlyTemperature(struct sensor* info,int n, int nmonth);

int maxMonthlyTemperature(struct sensor* info,int n, int nmonth);

int averageYearthlyTemperature(struct sensor* info,int n,int nyear);

int minYearthlyTemperature(struct sensor* info,int n,int nyear);

int maxYearthlyTemperature(struct sensor* info,int n,int nyear);

#endif
