.PHONY: run

run: main
	./main

main: main.c
	tcc main.c -g -o main
