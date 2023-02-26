#ifndef PHOTOGRAM_H
#define PHOTOGRAM_H
#include "AlbumArray.h"

class PhotoGram {
    private:
        AlbumArray* albumArr;
    public:
        PhotoGram();
        ~PhotoGram();

        const void printAlbums();
        const void displayAlbums();

        // album title string, album desc. string
        bool addAlbum(const string& albumTitle, const string& albumDesc);
        // album title string
        bool removeAlbum(const string& albumTitle);
        
        bool addPhoto(const string& albumTitle, Photo);
        // album title, photo title
        bool removePhoto(const string& albumTitle, const string& photoTitle);

        Album* downloadAlbum(const string&);
        Photo* downloadPhoto(const string&, const string&);


};
#endif
