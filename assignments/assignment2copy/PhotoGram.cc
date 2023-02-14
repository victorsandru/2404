#include "PhotoGram.h"

PhotoGram::PhotoGram() {
    albumArr = new AlbumArray();
}

PhotoGram::~PhotoGram() {
    delete albumArr;
}

bool PhotoGram::addAlbum(const string& title, const string& albumDesc) {
    if(albumArr->isFull()) return false;
    albumArr->add(new Album(title, albumDesc));
    return true;
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
    if(albumArr->get(title) != NULL) {
        return albumArr->get(title)->addPhoto(new Photo(photoToAdd));
    } else {
        cout << "album not found" << endl;
        return false;
    }
}

bool PhotoGram::removePhoto(const string& albTitle, const string& photoTitle) {
    if(albumArr->get(albTitle) != NULL) {
        return albumArr->get(albTitle)->removePhoto(photoTitle);
    } else {
        cout << "album not found" << endl;
        return false;
    }
}

Album* PhotoGram::downloadAlbum(const string& title) {
    return albumArr->get(title);
}

Photo* PhotoGram::downloadPhoto(const string& albTitle, const string& photoTitle) {
    if(albumArr->get(albTitle) != NULL) {
        return albumArr->get(albTitle)->getPhoto(photoTitle);
    } else {
        cout << "album not found" << endl;
        return NULL;
    }    
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