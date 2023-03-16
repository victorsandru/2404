objects = main.o Controller.o View.o Pierres.o Entity.o Queue.o Order.o Driver.o Franchise.o Location.o

a3: $(objects)
	g++ -g -o a3 $(objects) 

main.o: main.cc Controller.h 
	g++ -g -c main.cc 

Controller.o: Controller.h Controller.cc
	g++ -g -c Controller.cc
	
View.o: View.cc View.h
	g++ -g -c View.cc
	
Pierres.o: Pierres.cc Pierres.h
	g++ -g -c Pierres.cc

Entity.o: Entity.cc Entity.h
	g++ -g -c Entity.cc

Queue.o: Queue.h Queue.cc
	g++ -g -c Queue.cc

Order.o: Order.h Order.cc
	g++ -g -c Order.cc

	
Driver.o: Driver.cc Driver.h Entity.h
	g++ -g -c Driver.cc 

Franchise.o: Franchise.cc Franchise.h 
	g++ -g -c Franchise.cc

Location.o: Location.cc Location.h
	g++ -g -c Location.cc
	

clean:
	rm -f a3 *.o