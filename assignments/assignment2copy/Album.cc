#include "Album.h"

Album::Album(const string& titleName, const string& descriptionName) {
    title = titleName;
    description = descriptionName;
    albumArray = new PhotoArray();
}

Album::Album(const Album& copy) {
    title = copy.title;
    description = copy.description;
    albumArray = new PhotoArray();
    for(int i = 0; i < copy.albumArray->size(); i++) {
        albumArray->add(new Photo(*copy.albumArray->get(i)));
    }
}

Album::~Album() {
    delete albumArray;
}

int Album::size() {
    return albumArray->size();
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

bool Album::addPhoto(Photo* photoToAdd) {
    return albumArray->add(photoToAdd);
}

bool Album::addPhoto(int index, Photo* photoToAdd) {
    return albumArray->add(photoToAdd, index);
}

Photo* Album::getPhoto(const string& photo) {
    return albumArray->get(photo);
}

Photo* Album::getPhoto(int index) {
    return albumArray->get(index);
}

Photo* Album::removePhoto(const string& titleName) {
    return albumArray->remove(titleName);
}

Photo* Album::removePhoto(int index) {
    return albumArray->remove(index);
}

void Album::print() {
    cout << "Album Title: " << title << " | Desc.: " << description << endl;
}

void Album::display() {
    print();
    for(int i = 0; i < albumArray->size(); ++i) {
        albumArray->get(i)->display();
    }
}