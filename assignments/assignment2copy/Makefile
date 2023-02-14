# all: main
	
# main: main.cc Photo.o Date.o PhotoArray.o Album.o AlbumArray.o PhotoArray.o PhotoGram.o
# 	g++ -g -o main main.cc Photo.o Date.o PhotoArray.o Album.o AlbumArray.o PhotoArray.o PhotoGram.o

# PhotoGram.o: PhotoGram.cc PhotoGram.h
# 	g++ -g -c PhotoGram.cc

# AlbumArray.o: AlbumArray.cc AlbumArray.h
# 	g++ -g -c AlbumArray.cc

# PhotoArray.o:   PhotoArray.cc PhotoArray.h
# 	g++ -c PhotoArray.cc

# Photo.o: Photo.h Photo.cc
# 	g++ -c -g Photo.cc

# Date.o:	Date.h Date.cc
# 	g++ -c Date.cc

# PhotoArray.o: PhotoArray.h PhotoArray.cc
# 	g++ -g -c PhotoArray.cc 

# Album.o: Album.h Album.cc
# 	g++ -g -c Album.cc

# clean:
# 	rm -f test *.o

#observe - Linux is case sensitive. These names should match your filenames exactly

all: main test

main: main.cc PhotoArray.o Photo.o Date.o Album.o AlbumArray.o PhotoGram.o 
	g++ -o main main.cc PhotoArray.o Photo.o Date.o Album.o AlbumArray.o PhotoGram.o

test: TestControl.o TestView.o PhotoArray.o Photo.o Date.o Album.o AlbumArray.o PhotoGram.o 
	g++ -o test TestView.o TestControl.o PhotoArray.o Photo.o Date.o Album.o AlbumArray.o PhotoGram.o 
	
TestView.o: TestView.cc TestView.h
	g++ -c TestView.cc

TestControl.o: TestControl.cc TestControl.h
	g++ -g -c TestControl.cc

PhotoGram.o: PhotoGram.cc PhotoGram.h
	g++ -g -c PhotoGram.cc

AlbumArray.o: AlbumArray.cc AlbumArray.h
	g++ -g -c AlbumArray.cc

PhotoArray.o:   PhotoArray.cc PhotoArray.h
	g++ -c PhotoArray.cc
	
Album.o:	Album.h Album.cc 
	g++ -c Album.cc 

Photo.o:	Photo.h Photo.cc
	g++ -c Photo.cc

Date.o:	Date.h Date.cc
	g++ -c Date.cc
	
clean:
	rm -f test *.o main
