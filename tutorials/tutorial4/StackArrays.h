#ifndef STACKARRAYS_H
#define STACKARRAYS_H
#include "Photo.h"

class StackArrays {
    private:
        Photo photoObjArray[ARR_SIZE];
        Photo* photoPtrArray[ARR_SIZE];
        int arrayLength;
    public:
        StackArrays();
        ~StackArrays();

        Photo* getObjectArray();
        Photo** getPointerArray();
        
        void addPhoto(Photo& photoToAdd);
};
#endif