#include "Photo.h"

Photo::Photo(){
    title = "default title";
    content = "default content";
    date = Date(1900, 1, 1);
}

Photo::Photo(const string& titleC, const Date& dateC, const string& contentC) {
    title = titleC;
    date = dateC;
    content = contentC;
}

Photo::Photo(const Photo& oldPhoto) {
    title = oldPhoto.title;
    date = oldPhoto.date;
    content = oldPhoto.content;
}

bool Photo::equals(const string& titleName) {
    return title == titleName;
}

void Photo::print() {
    cout << "Photo Title: " << title << " | date: " << date.toString() << endl; 
}

void Photo::display() {
    print();
    cout << "Photo content: " << content << endl;
}

string& Photo::getTitle() {
    return title;
}