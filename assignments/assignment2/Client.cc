#include "Client.h"

Client::Client() {
    albArray = new AlbumArray();
}

Client::~Client() {
    for(int i = 0; i < albArray->size(); ++i) {
        delete albArray->get(i);
    }
    delete albArray;
}

bool Client::downloadAlbum(PhotoGram* pg, const string& albumTitle) {
    if(pg->downloadAlbum(albumTitle) != NULL && !albArray->isFull()) {
        return albArray->add(new Album(*(pg->downloadAlbum(albumTitle))));
    }
    cout << "could not download album" << endl;
    return false;
}

bool Client::displayOnlinePhoto(PhotoGram* pg, const string& albumTitle, const string& photoTitle) {
    if(pg->downloadAlbum(albumTitle) != NULL && pg->downloadAlbum(albumTitle)->getPhoto(photoTitle) != NULL) {
        pg->downloadAlbum(albumTitle)->getPhoto(photoTitle)->display();
        return true;
    }
    cout << "album or photo not found" << endl;
    return false;
}

bool Client::displayLocalPhoto(const string& albumTitle, const string& photoTitle) {
    if(albArray->get(albumTitle) != NULL && albArray->get(albumTitle)->getPhoto(photoTitle) != NULL) {
        albArray->get(albumTitle)->getPhoto(photoTitle)->display();
        return true;
    }
    cout << "album or photo not found" << endl;
    return false;    
}

const void Client::printLocalAlbums() {
    for(int i = 0; i < albArray->size(); i++) {
        albArray->get(i)->print();
    }
}

const void Client::displayLocalAlbums() {
        for(int i = 0; i < albArray->size(); i++) {
        albArray->get(i)->display();
    }
}
