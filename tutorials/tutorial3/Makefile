all: Date.o Reservation.o Room.o test1 test2

Date.o: Date.h Date.cc
	g++ -c Date.cc

Reservation.o: Reservation.cc Reservation.h
	g++ -c Reservation.cc

Room.o: Room.cc Room.h
	g++ -g -c Room.cc

test1: test1.cc
	g++ -o test1 test1.cc Room.o Reservation.o Date.o


test2: test2.cc
	g++ -o test2 test2.cc Room.o Reservation.o Date.o

clean:
	rm -rf *.o test1 test2