all: prog

prog: main.o temp_functions.o
	gcc -o prog main.o temp_functions.o

main.o: main.c temp_functions.h
	gcc -c --std=c99 -o main.o main.c

temp_functions.o: temp_functions.c
	gcc -c --std=c99 -o temp_functions.o temp_functions.c
	
clean:
	del *.o
	del prog.exe
	
