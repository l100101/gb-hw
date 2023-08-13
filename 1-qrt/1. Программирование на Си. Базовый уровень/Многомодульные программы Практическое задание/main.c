#include <stdio.h>
#include "func.h"

int m; // Глобальная переменная. Видна из обоих файлов

//static int sm; // Глобальная переменная. Видна только из main.c

int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	m = max(a,b);
	printf("max(%d %d) = %d\n",a,b,m);
	return 0;
}
