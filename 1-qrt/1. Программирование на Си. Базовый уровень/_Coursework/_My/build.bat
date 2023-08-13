color 3
chcp 1251
 gcc -c --std=c99 -o main.o  main.c
 gcc -c --std=c99 -o temp_functions.o temp_functions.c
 gcc -o prog temp_functions.o main.o
 pause
