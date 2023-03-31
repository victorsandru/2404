#include "PhotoGram.h"

PhotoGram::PhotoGram() {
    albumArr = new Array<Album*>();
    photoArr = new Array<Photo*>();
    mf = MediaFactory();
}

PhotoGram::~PhotoGram() {
    for(int i = 0; i < albumArr->size(); ++i) {
        delete (*albumArr)[i];
    }
    delete albumArr;
}

bool PhotoGram::addAlbum(const string& title, const string& albumDesc) {
    if(albumArr->isFull()) return false;
    albumArr->add(new Album(title, albumDesc));
    return true;
}

void PhotoGram::addToAlbum(int index, Array<Photo*> arr) {
    if(index < 0 || index > albumArr->size()) {
        cerr << "Invalid index." << endl;
        return;
    }
    for(int i = 0; i < arr.size(); ++i) {
       (*albumArr)[index]->addPhoto(arr[i]);
    }
}

void PhotoGram::uploadPhoto(const string& title) {
    Photo* p = mf.uploadPhoto(title);
    photoArr->add(p);
}

void PhotoGram::deleteAlbum(int index) {
    if(index < 0 || index > albumArr->size()) {
        cerr << "Invalid index." << endl;
        return;
    }
    albumArr->remove(index);
}

void PhotoGram::getPhotos(const Criteria& c, Array<Photo*>& arr) const{
    for(int i = 0 ; i < arr.size(); i++) {
        if(c.matches(*arr[i])) {
            photoArr->add(arr[i]);
        }
    }
}

void PhotoGram::displayAlbum(int index, View& v) const {
    if(index < 0 || index > albumArr->size()) {
        cerr << "Invalid index." << endl;
        return;
    }
    v.displayAlbum(*(*albumArr)[index]);
}

int PhotoGram::printAlbums(View& v) const {
    v.printAlbums(*albumArr);
    return albumArr->size();
}

void PhotoGram::displayPhoto(int index, View& v) const {
    if(index < 0 || index > photoArr->size()) {
        cerr << "Invalid index." << endl;
        return;
    }
    v.displayPhoto(*(*photoArr)[index]);
}

int PhotoGram::printPhotos(View& v) const {
    v.printPhotos(*photoArr);
    return photoArr->size();
}

// bool PhotoGram::addPhoto(const string& title, Photo photoToAdd) {
//     if(albumArr->get(title) != NULL) {
//         return albumArr->get(title)->addPhoto(new Photo(photoToAdd));
//     } else {
//         cout << "album not found" << endl;
//         return false;
//     }
// }

// bool PhotoGram::removePhoto(const string& albTitle, const string& photoTitle) {
//     if(albumArr->get(albTitle) != NULL) {
//         delete albumArr->get(albTitle)->removePhoto(photoTitle);
//         return true;
//     } else {
//         cout << "album not found" << endl;
//         return false;
//     }
// }

// Album* PhotoGram::downloadAlbum(const string& title) {
//     if(albumArr->get(title) != NULL) {
//         return albumArr->get(title);
//     }
//     cout << "album not found" << endl;
//     return NULL;
// }

// Photo* PhotoGram::downloadPhoto(const string& albTitle, const string& photoTitle) {
//     if(albumArr->get(albTitle) != NULL) {
//         return albumArr->get(albTitle)->getPhoto(photoTitle);
//     }
//     cout << "album not found" << endl;
//     return NULL;
// }

// const void PhotoGram::printAlbums() {
//     for(int i = 0; i < albumArr->size(); ++i) {
//         albumArr->get(i)->print();
//     }
// }

// const void PhotoGram::displayAlbums() {
//     for(int i = 0; i < albumArr->size(); ++i) {
//         albumArr->get(i)->display();
//     }
// }