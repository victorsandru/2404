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

        // void printAlbums() const;
        // void displayAlbums() const;

        // album title string, album desc. string
        bool addAlbum(const string& albumTitle, const string& albumDesc);
        void addToAlbum(int, Array<Photo*>);
        void uploadPhoto(const string&);
        void deleteAlbum(int);
        void getPhotos(const Criteria&, Array<Photo*>&) const;
        
        // bool addPhoto(const string& albumTitle, Photo);
        // bool removePhoto(const string& albumTitle, const string& photoTitle);

        void displayAlbum(int, View&) const;
        int printAlbums(View&) const;
        void displayPhoto(int, View&) const;
        int printPhotos(View&) const;

        // Album* downloadAlbum(int index);
        // Photo* downloadPhoto(const string&, const string&);


};
#endif
