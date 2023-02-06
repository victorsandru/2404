all: main
	
main: main.cc Photo.o Date.o PhotoArray.o Album.o
	g++ -g -o main main.cc Photo.o Date.o PhotoArray.o Album.o

Photo.o: Photo.h Photo.cc
	g++ -c -g Photo.cc

Date.o:	Date.h Date.cc
	g++ -c Date.cc

PhotoArray.o: PhotoArray.h PhotoArray.cc
	g++ -g -c PhotoArray.cc 

Album.o: Album.h Album.cc
	g++ -g -c Album.cc

clean:
	rm -f test *.o
