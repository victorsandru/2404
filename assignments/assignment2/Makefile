#observe - Linux is case sensitive. These names should match your filenames exactly

all: main

main: main.cc PhotoArray.o Photo.o Date.o Album.o AlbumArray.o PhotoGram.o TestView.o TestControl.o Client.o
	g++ -g -o main main.cc PhotoArray.o Photo.o Date.o Album.o AlbumArray.o PhotoGram.o TestView.o TestControl.o Client.o

TestView.o: TestView.cc TestView.h
	g++ -g -c TestView.cc

TestControl.o: TestControl.cc TestControl.h
	g++ -g -c TestControl.cc

Client.o: Client.cc Client.h
	g++ -g -c Client.cc

PhotoGram.o: PhotoGram.cc PhotoGram.h
	g++ -g -c PhotoGram.cc

AlbumArray.o: AlbumArray.cc AlbumArray.h
	g++ -g -c AlbumArray.cc

PhotoArray.o:   PhotoArray.cc PhotoArray.h
	g++ -g -c PhotoArray.cc
	
Album.o:	Album.h Album.cc 
	g++ -g -c Album.cc 

Photo.o:	Photo.h Photo.cc
	g++ -g -c Photo.cc

Date.o:	Date.h Date.cc
	g++ -c Date.cc
	
clean:
	rm -f test *.o main main2
