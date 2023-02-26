#ifndef ALBUMARRAY_H
#define ALBUMARRAY_H
#include "Album.h"
class AlbumArray {
    private:
        Album** array;
        int arrayLength;
    public:
        AlbumArray(/* args */);
        ~AlbumArray();

        const bool isFull();
        const int size();

        bool add(Album*);

        //returns pointer to album with title
        Album* get(const string&);
        //returns the album at the index specified
        Album* get(int);

        //returns and removes album pointer with specified title
        Album* remove(const string&);
        //returns and removes album pointer with specified index
        Album* remove(int);
};

#endif