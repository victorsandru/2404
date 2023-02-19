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

        int size();
        string& getTitle();
        bool equals(const string&);
        bool lessThan(Album&);
        bool addPhoto(Photo*);
        bool addPhoto(int, Photo*);
        Photo* getPhoto(const string&);
        Photo* getPhoto(int);
        Photo* removePhoto(const string&);
        Photo* removePhoto(int);

        void print();
        void display();
};
#endif
