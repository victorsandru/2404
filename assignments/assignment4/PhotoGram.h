#ifndef PHOTOGRAM_H
#define PHOTOGRAM_H
#include "MediaFactory.h"

class PhotoGram {
    private:
        Array<Album*>* albumArr;
        Array<Photo*>* photoArr;
        MediaFactory mf;
    public:
        PhotoGram();
        ~PhotoGram();

        void printAlbums() const;
        void displayAlbums() const;

        // album title string, album desc. string
        bool addAlbum(const string& albumTitle, const string& albumDesc);
        void addToAlbum(int, Array<Photo*>*);
        void uploadPhoto(const string&);
        bool deleteAlbum(int);
        Photo* getPhotos(Criteria, Array<Photo*>*);
        
        bool addPhoto(const string& albumTitle, Photo);
        // album title, photo title
        bool removePhoto(const string& albumTitle, const string& photoTitle);

        Album* downloadAlbum(int index);
        Photo* downloadPhoto(const string&, const string&);


};
#endif
