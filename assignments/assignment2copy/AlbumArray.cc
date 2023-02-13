#include "AlbumArray.h"

AlbumArray::AlbumArray() {
    array = new Album*[MAX_ARRAY];
    arrayLength = 0;
}

AlbumArray::~AlbumArray() {
    for(int i = 0; i < arrayLength; ++i) {
        delete array[i];
    }
    delete[] array;
}

bool AlbumArray::isFull() {
    return MAX_ARRAY == arrayLength;
}

int AlbumArray::size() {
    return arrayLength;
}

bool AlbumArray::add(Album* AlbumAdd) {
    if(isFull()) return false;
    array[arrayLength] = AlbumAdd;
    ++arrayLength;
    return true;
}

Album* AlbumArray::get(const string& name) {
    for(int i = 0; i < arrayLength; ++i) {
        if(name == array[i]->getTitle()) {
            return array[i];
        }
    }
    return NULL;
}

Album* AlbumArray::get(int index) {
    if(index >= arrayLength) return NULL;
    return array[index];
}

Album* AlbumArray::remove(const string& name) {
    Album* rv;
    for(int i = 0; i < arrayLength; ++i) {
        if(name == array[i]->getTitle()) {
            rv = array[i];
            for(int j = i; j < arrayLength; ++j) {
                array[j] = array[j + 1];
            }
            --arrayLength;
            return rv;
        }
    }
    return NULL;
}

Album* AlbumArray::remove(int index) {
    if(index >= arrayLength || index < 0) return NULL;
    Album* rv = array[index];
    for(int i = index; i < arrayLength; ++i) {
        array[i] = array[i + 1];
    }
    --arrayLength;
    return rv;
}