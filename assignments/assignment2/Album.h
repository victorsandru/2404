#ifndef ALBUM_H
#define ALBUM_H
#include "PhotoArray.h"

class Album {
    private:
        string title;
        string description;
        PhotoArray* albumArray;
    public:
        Album(const string&, const string&);
        Album(const Album&);
        ~Album();

        const int size();
        const string& getTitle();
        const bool equals(const string&);
        bool lessThan(Album&);
        bool addPhoto(Photo*);
        bool addPhoto(int, Photo*);
        Photo* getPhoto(const string&);
        Photo* getPhoto(int);
        Photo* removePhoto(const string&);
        Photo* removePhoto(int);

        const void print();
        const void display();
};
#endif
