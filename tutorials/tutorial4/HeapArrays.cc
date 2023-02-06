#include "HeapArrays.h"

HeapArrays::HeapArrays() {
    arrayLength = 0;
    photoObjArray = new Photo[ARR_SIZE];
    photoPtrArray = new Photo*[ARR_SIZE];
}

HeapArrays::~HeapArrays() {
    for(int i = 0; i < arrayLength; ++i) {
        delete photoPtrArray[i];
    }
    delete[] photoObjArray;
    delete[] photoPtrArray;
}

Photo* HeapArrays::getObjectArray() {
    return &photoObjArray[0];
}

Photo** HeapArrays::getPointerArray() {
    return &photoPtrArray[0];
}

void HeapArrays::addPhoto(Photo photoToAdd) {
    Photo* newPhoto = new Photo(photoToAdd);
    photoObjArray[arrayLength] = *newPhoto;
    photoPtrArray[arrayLength] = newPhoto;
    arrayLength++;
}