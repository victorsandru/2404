all: test
	
test: test.cc Photo.o Date.o HeapArrays.o StackArrays.o
	g++ -g -o test test.cc Photo.o Date.o HeapArrays.o StackArrays.o

main: main.cc Photo.o Date.o StackArrays.o HeapArrays.o
	g++ -g -o main main.cc Photo.o Date.o StackArrays.o HeapArrays.o
	
StackArrays.o:	StackArrays.h StackArrays.cc 
	g++ -c -g StackArrays.cc 
	
HeapArrays.o:	HeapArrays.h HeapArrays.cc 
	g++ -c -g HeapArrays.cc 

Photo.o:	Photo.h Photo.cc
	g++ -c -g Photo.cc

Date.o:	Date.h Date.cc
	g++ -c Date.cc
	
clean:
	rm -f test *.o
