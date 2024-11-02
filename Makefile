.PHONY: run

run: main
	./main

main: main.c
	$(CC) main.c -g -o main
