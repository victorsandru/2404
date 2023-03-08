objects = Driver.o Entity.o Franchise.o Location.o Order.o Queue.o

all: test
	
test: test.cc $(objects)
	g++ -g -o test test.cc $(objects)
	
Driver.o:	Driver.h Driver.cc
	g++ -c -g Driver.cc

Entity.o:	Entity.h Entity.cc
	g++ -c -g Entity.cc

Franchise.o:	Franchise.h Franchise.cc
	g++ -c -g Franchise.cc

Queue.o:	Queue.h Queue.cc
	g++ -c -g Queue.cc

Order.o:	Order.h Order.cc
	g++ -c -g Order.cc

Location.o:	Location.h Location.cc
	g++ -c -g Location.cc
	
clean:
	rm -f test *.o
