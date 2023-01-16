all: Date.o Reservation.o test

Date.o: Date.h Date.cc
	g++ -c Date.cc

Reservation.o: Reservation.cc Reservation.h
	g++ -c Reservation.cc

test: tester.cc
	g++ -o test tester.cc Reservation.o Date.o

clean:
	rm -rf *.o test