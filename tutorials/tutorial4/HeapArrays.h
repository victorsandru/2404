#ifndef HEAPARRAYS_H
#define HEAPARRAYS_H
#include "StackArrays.h"

class HeapArrays {
    private:
        Photo* photoObjArray;
        Photo** photoPtrArray;
        int arrayLength;
    public:
        HeapArrays();
        ~HeapArrays();

        Photo* getObjectArray();
        Photo** getPointerArray();

        void addPhoto(Photo& photoToAdd);
};
#endif
