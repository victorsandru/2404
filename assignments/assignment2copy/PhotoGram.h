#ifndef PHOTOGRAM_H
#define PHOTOGRAM_H
#include "AlbumArray.h"

class PhotoGram {
    private:
        AlbumArray* albumArr;
    public:
        PhotoGram();
        ~PhotoGram();

        void printAlbums();
        void displayAlbums();

        // album title string, album desc. string
        bool addAlbum(const string&, const string&);
        // album title string
        bool removeAlbum(const string&);
        
        bool addPhoto(const string&, Photo);
        // album title, photo title
        bool removePhoto(const string&, const string&);

        Album* downloadAlbum(const string&);
        Photo* downloadPhoto(const string&, const string&);


};
#endif
