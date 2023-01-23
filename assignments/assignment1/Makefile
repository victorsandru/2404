all: Date.o Reservation.o Room.o Hotel.o tester main

Date.o: Date.h Date.cc
	g++ -c Date.cc

Reservation.o: Reservation.cc Reservation.h
	g++ -c Reservation.cc

Room.o: Room.cc Room.h
	g++ -g -c Room.cc

Hotel.o: Hotel.cc Hotel.h
	g++ -c Hotel.cc

tester: tester.cc
	g++ -g -o tester tester.cc Reservation.o Date.o Room.o Hotel.o

main: main.cc
	g++ -g -o main main.cc Reservation.o Date.o Room.o Hotel.o

clean:
	rm -rf *.o tester main