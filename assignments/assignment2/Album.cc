#include "Album.h"

Album::Album(const string& titleName, const string& descriptionName) {
    title = titleName;
    description = descriptionName;
    albumArray = new PhotoArray();
}

Album::Album(const Album& copy) {
    title = copy.title;
    description = copy.description;
    albumArray = copy.albumArray;
}

Album::~Album() {
    //
}

string& Album::getTitle() {
    return title;
}

bool Album::equals(const string& titleName) {
    return titleName == title;
}

bool Album::lessThan(Album& alb) {
    return title < alb.getTitle();
}

bool Album::add(Photo* photoToAdd) {
    return albumArray->add(photoToAdd);
}

bool Album::add(Photo* photoToAdd, int index) {
    return albumArray->add(photoToAdd, index);
}

Photo* Album::get(const string& photo) {
    return albumArray->get(photo);
}

Photo* Album::get(int index) {
    return albumArray->get(index);
}

Photo* Album::remove(const string& titleName) {
    return albumArray->remove(titleName);
}

Photo* Album::remove(int index) {
    return albumArray->remove(index);
}

void Album::print() {
    cout << "Title: " << title << " | Desc.: " << description << endl;
}

void Album::display() {
    print();
    for(int i = 0; i < albumArray->size(); ++i) {
        albumArray->get(i)->display();
    }
}