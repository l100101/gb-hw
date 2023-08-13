 #include <stdio.h> 
#include <conio.h> 
#define N 15
int main(int argc, char **argv) 
{ 
 FILE *open; 
 char name[] = "temperature_small.csv"; 
 open = fopen(name, "r"); 
if(open==NULL) 
	return 1;
int Y,M,D;
int r;

	while((r = fscanf(open, "%d;%d;%d",&Y,&M,&D))>0){
		if(r<N)
		{
		do
		{  
			ch=fgetc(fopen); 
		}while(EOF != ch && '\n' != ch ); // пропускаем оставшиеся символы до конца файла или строки (на случай, если строка была чересчур длинной
		}
		else
			printf("%d = %d;%d;%d\n", r,Y,M,D);     
	}
 return 0; 
}
