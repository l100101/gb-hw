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

void SortByT(struct sensor* info,int n);

void SortByDate(struct sensor* info,int n);

int AddInfo(struct sensor* info);

void print(struct sensor* info,int number);

void averageMonthlyTemperature(struct sensor* info,int n);

void minMonthlyTemperature(struct sensor* info,int n);

void maxMonthlyTemperature(struct sensor* info,int n);

void averageYearthlyTemperature(struct sensor* info,int n);

void minYearthlyTemperature(struct sensor* info,int n);

void maxYearthlyTemperature(struct sensor* info,int n);

#endif
