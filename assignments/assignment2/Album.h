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

        string& getTitle();
        bool equals(const string&);
        bool lessThan(Album&);
        bool add(Photo*);
        bool add(Photo*, int);
        Photo* get(const string&);
        Photo* get(int);
        Photo* remove(const string&);
        Photo* remove(int);

        void print();
        void display();
};
#endif
