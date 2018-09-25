all: main 

main: main.cpp Animal.o
	g++ -std=c++11 -o main main.cpp Animal.o

Animal.o: Animal.cpp Animal.h
	g++ -std=c++11 -c Animal.cpp

