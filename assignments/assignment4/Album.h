#ifndef ALBUM_H
#define ALBUM_H
#include "Array.h"

class Album {
    private:
        string title;
        string description;
        Array<Photo*>* albumArray;
    public:
        Album(const string&, const string&);
        ~Album();

        int size() const;
        const string& getTitle() const;
        bool equals(const string&) const;
        bool lessThan(Album&);
        void addPhoto(Photo*);
        Photo* getPhoto(int) const;

        void print(ostream&) const;
        void display(ostream&) const;
};
#endif
