#include "PhotoGram.h"

PhotoGram::PhotoGram() {
    albumArr = new AlbumArray();
}

PhotoGram::~PhotoGram() {
    for(int i = 0; i < albumArr->size(); ++i) {
        delete albumArr->get(i);
    }
    delete albumArr;
}

bool PhotoGram::addAlbum(const string& title, const string& albumDesc) {
    if(albumArr->isFull()) return false;
    albumArr->add(new Album(title, albumDesc));
    return true;
}

bool PhotoGram::removeAlbum(const string& title) {
    Album* albumRemove = albumArr->remove(title);
    if(albumRemove != NULL) {
        delete albumRemove;
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
        delete albumArr->get(albTitle)->removePhoto(photoTitle);
        return true;
    } else {
        cout << "album not found" << endl;
        return false;
    }
}

Album* PhotoGram::downloadAlbum(const string& title) {
    if(albumArr->get(title) != NULL) {
        return albumArr->get(title);
    }
    cout << "album not found" << endl;
    return NULL;
}

Photo* PhotoGram::downloadPhoto(const string& albTitle, const string& photoTitle) {
    if(albumArr->get(albTitle) != NULL) {
        return albumArr->get(albTitle)->getPhoto(photoTitle);
    }
    cout << "album not found" << endl;
    return NULL;
}

const void PhotoGram::printAlbums() {
    for(int i = 0; i < albumArr->size(); ++i) {
        albumArr->get(i)->print();
    }
}

const void PhotoGram::displayAlbums() {
    for(int i = 0; i < albumArr->size(); ++i) {
        albumArr->get(i)->display();
    }
}