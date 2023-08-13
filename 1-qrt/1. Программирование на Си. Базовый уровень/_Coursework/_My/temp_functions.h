#include <stdint.h>
#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

#define SIZE 500

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

float averageMonthlyTemperature(struct sensor* info,int n, int nmonth);

int minMonthlyTemperature(struct sensor* info,int n, int nmonth);

int maxMonthlyTemperature(struct sensor* info,int n, int nmonth);

float averageYearthlyTemperature(struct sensor* info,int n,int nyear);

int minYearthlyTemperature(struct sensor* info,int n,int nyear);

int maxYearthlyTemperature(struct sensor* info,int n,int nyear);

#endif
