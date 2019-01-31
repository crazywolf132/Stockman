CC=g++
CFLAGS=-I

all: main.o stockManager.o stockItem.o
	$(CC) -o stockMan main.o stockManager.o stockItem.o

clean:
	rm -rf ./*.o
	rm -rf ./stockMan