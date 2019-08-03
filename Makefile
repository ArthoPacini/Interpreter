CC=g++-9
CFLAGS= -std=c++17 -Wall -O3

make:
	$(CC) main.cpp -o main $(CFLAGS)