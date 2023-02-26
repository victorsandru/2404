#ifndef CLIENT_H
#define CLIENT_H

#include "PhotoGram.h"

class Client {
    private:
        AlbumArray* albArray;
    public:
        Client();
        ~Client();

        bool downloadAlbum(PhotoGram* pg, const string& albumTitle);
        bool displayOnlinePhoto(PhotoGram* pg, const string& albumTitle, const string& photoTitle);
        bool displayLocalPhoto(const string& albumTitle, const string& photoTitle);

        const void printLocalAlbums();
        const void displayLocalAlbums();
};
#endif