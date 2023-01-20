all: Date.o Reservation.o Room.o tester 

Date.o: Date.h Date.cc
	g++ -c Date.cc

Reservation.o: Reservation.cc Reservation.h
	g++ -c Reservation.cc

Room.o: Room.cc Room.h
	g++ -c Room.cc

tester: tester.cc
	g++ -o tester tester.cc Reservation.o Date.o Room.o

clean:
	rm -rf *.o tester