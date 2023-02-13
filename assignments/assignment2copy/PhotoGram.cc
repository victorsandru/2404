#include "PhotoGram.h"

PhotoGram::PhotoGram() {
    albumArr = new AlbumArray();
}

PhotoGram::~PhotoGram() {
    delete albumArr;
}

bool PhotoGram::addAlbum(const string& title, const string& albumDesc) {
    if(albumArr->isFull()) return false;
    Album* albToAdd = new Album(title, albumDesc);
    albumArr->add(albToAdd);
}

bool PhotoGram::removeAlbum(const string& title) {
    if(albumArr->remove(title) != NULL) {
        return true;
    } else {
        cout << "title does not exist" << endl;
        return false;
    }
}

bool PhotoGram::addPhoto(const string& title, Photo photoToAdd) {
    return albumArr->get(title)->addPhoto(&photoToAdd);
}

bool PhotoGram::removePhoto(const string& albTitle, const string& photoTitle) {
    return albumArr->get(albTitle)->removePhoto(photoTitle);
}

Album* PhotoGram::downloadAlbum(const string& title) {
    return albumArr->get(title);
}

Photo* PhotoGram::downloadPhoto(const string& albTitle, const string& photoTitle) {
    return albumArr->get(albTitle)->getPhoto(photoTitle);
}

void PhotoGram::printAlbums() {
    for(int i = 0; i < albumArr->size(); ++i) {
        albumArr->get(i)->print();
    }
}

void PhotoGram::displayAlbums() {
    for(int i = 0; i < albumArr->size(); ++i) {
        albumArr->get(i)->display();
    }
}