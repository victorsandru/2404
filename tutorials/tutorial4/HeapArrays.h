#ifndef HEAPARRAYS_H
#define HEAPARRAYS_H
#include "StackArrays.h"

class HeapArrays {
    private:
        Photo* photoObjArray[ARR_SIZE];
        Photo** photoPtrArray[ARR_SIZE];
        int arrayLength;
    public:
        HeapArrays();
        ~HeapArrays();

        Photo* getObjectArray();
        Photo* getPointerArray();

        void addPhoto(Photo photoToAdd);
};
#endif
