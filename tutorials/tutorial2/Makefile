all: Character.o battle.o main

Character.o: Character.h Character.cc
	g++ -c Character.cc

battle.o: battle.h battle.cc
	g++ -c battle.cc

main: main.cc
	g++ -o main main.cc battle.o Character.o

clean:
	rm -rf *.o main