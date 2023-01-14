all: date main

date: Date.cc defs.h
	g++ -c Date.cc defs.h

main: tester.cc defs.h
	g++ -o tester tester.cc Date.o defs.h