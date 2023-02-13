#ifndef PHOTOARRAY_H
#define PHOTOARRAY_H
#include "Photo.h"
class PhotoArray {
    private:
        Photo** array;
        int arrayLength;
    public:
        PhotoArray();
        ~PhotoArray();

        bool isFull();
        int size();

        //adds photo to the back of the array
        bool add(Photo*);
        //adds photo to index specified
        bool add(Photo*, int);

        //returns pointer to photo with title
        Photo* get(const string&);
        //returns the photo at the index specified
        Photo* get(int);

        //returns and removes photo pointer with specified title
        Photo* remove(const string&);
        //returns and removes photo pointer with specified index
        Photo* remove(int);
};
#endif