#include "PhotoArray.h"

PhotoArray::PhotoArray() {
    array = new Photo*[MAX_ARRAY];
    arrayLength = 0;
}

PhotoArray::~PhotoArray() {
    for(int i = 0; i < arrayLength; ++i) {
        delete array[i];
    }
    delete[] array;
}

bool PhotoArray::isFull() {
    return MAX_ARRAY == arrayLength;
}

int PhotoArray::size() {
    return arrayLength;
}

bool PhotoArray::add(Photo* photoAdd) {
    if(isFull()) return false;
    array[arrayLength] = photoAdd;
    ++arrayLength;
    return true;
}

bool PhotoArray::add(Photo* photoAdd, int index) {
    if(isFull() || index > arrayLength) return false;
    for(int i = arrayLength + 1; i >= index; --i) {
        array[i] = array[i - 1];
    }
    array[index] = photoAdd;
    ++arrayLength;
    return true;
}

Photo* PhotoArray::get(const string& name) {
    for(int i = 0; i < arrayLength; ++i) {
        if(name == array[i]->getTitle()) {
            return array[i];
        }
    }
    return NULL;
}

Photo* PhotoArray::get(int index) {
    if(index >= arrayLength) return NULL;
    return array[index];
}

Photo* PhotoArray::remove(const string& name) {
    if(size() == 0) return NULL;
    Photo* rv;
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

Photo* PhotoArray::remove(int index) {
    if(size() == 0) return NULL;
    if(index >= arrayLength || index < 0) return NULL;
    Photo* rv = array[index];
    for(int i = index; i < arrayLength; ++i) {
        array[i] = array[i + 1];
    }
    --arrayLength;
    return rv;
}