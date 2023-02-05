#ifndef PHOTO_H
#define PHOTO_H
#include "Date.h"

class Photo {
    private:
        string title;
        string content;
        Date date;
    public:
        Photo();
        Photo(const string& title, const Date& date, const string& content);
        Photo(const Photo& oldPhoto);
        
        bool equal(const string& titleName);
        void print();
        void display();
};
#endif
