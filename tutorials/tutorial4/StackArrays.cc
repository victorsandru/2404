#include "StackArrays.h"

StackArrays::StackArrays() {
    arrayLength = 0;
}

StackArrays::~StackArrays() {
    for(int i = 0; i < arrayLength; ++i) {
        delete photoPtrArray[i];
    }
}

Photo* StackArrays::getObjectArray() {
    return &photoObjArray[0];
}

Photo** StackArrays::getPointerArray() {
    return &photoPtrArray[0];
}

void StackArrays::addPhoto(Photo& photoToAdd) {
    photoObjArray[arrayLength] = photoToAdd;
    photoPtrArray[arrayLength] = new Photo(photoToAdd);
    arrayLength++;
}