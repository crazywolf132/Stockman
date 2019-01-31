CC=g++
CFLAGS=-I

all: main.o stockManager.o
	$(CC) -o stockMan main.o stockManager.o

clean:
	rm -rf ./*.o
	rm -rf ./stockMan