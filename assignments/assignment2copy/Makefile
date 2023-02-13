# all: main
	
# main: main.cc Photo.o Date.o PhotoArray.o Album.o
# 	g++ -g -o main main.cc Photo.o Date.o PhotoArray.o Album.o

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

all: test main

main: main.cc PhotoArray.o Photo.o Date.o Album.o 
	g++ -o main main.cc PhotoArray.o Photo.o Date.o Album.o 

test: test.o PhotoArray.o Photo.o Date.o Album.o 
	g++ -o test test.o PhotoArray.o Photo.o Date.o Album.o 
	
test.o: test.cc Photo.h Album.h
	g++ -c test.cc

PhotoArray.o:   PhotoArray.cc PhotoArray.h
	g++ -c PhotoArray.cc
	
Album.o:	Album.h Album.cc 
	g++ -c Album.cc 

Photo.o:	Photo.h Photo.cc
	g++ -c Photo.cc

Date.o:	Date.h Date.cc
	g++ -c Date.cc
	
clean:
	rm -f test *.o
