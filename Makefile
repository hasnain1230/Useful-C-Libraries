TARGET = main
CC = gcc
CFLAGS = -g -std=c99 -Wall -Wvla -Werror

all: $(TARGET)

run: $(TARGET)
	./main

main: Arrays.o main.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c
	$(CC) -c $(CFLAGS) $^

Arrays.o: Arrays.c
	$(CC) -c $(CFLAGS) $^

clean:
	rm -rfv $(TARGET) *.o *.a *.dylib *.dSYM
