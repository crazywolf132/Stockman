CC=g++
CFLAGS=-I

all:
	$(MAKE) -C src

clean:
	rm -rf ./*.o
	rm -rf ./stockMan