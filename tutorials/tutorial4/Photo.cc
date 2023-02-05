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
    content = "YOU HAVE BEEN COPYRIGHT RCMP";
}

bool Photo::equal(const string& titleName) {
    return title == titleName;
}

void Photo::print() {
    cout << "Title: " << title << " | date: " << date.toString() << endl; 
}

void Photo::display() {
    print();
    cout << "content: " << content << endl;
}