all: Character.o battle.o p1

Character.o: Character.h Character.cc
	g++ -c Character.cc

battle.o: battle.h battle.cc
	g++ -c battle.cc

p1: main.cc
	g++ -o p1 main.cc battle.o Character.o

clean:
	rm -rf *.o p1