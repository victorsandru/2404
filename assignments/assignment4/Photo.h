#ifndef PHOTO_H
#define PHOTO_H
#include "Date.h"

class Photo {
    private:
        string title;
        string content;
        string category;
        Date date;
    public:
        Photo();
        Photo(const string& title, const string& category, const Date& date, const string& content);
        Photo(const Photo& oldPhoto);

        const string& getTitle() const;
        const Date& getDate() const;
        const string& getCategory() const;
        const string& getContent() const;

        
        bool equals(const string& titleName) const;
        void print(ostream&) const;
        void display(ostream&) const;

		friend ostream& operator<<(ostream& os, const Photo&);
};
#endif
