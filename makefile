SRC=$(wildcard *.c)

make: $(wildcard *.c) include.h
	gcc -o main *.c
