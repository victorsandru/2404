
#ifndef ARRAY_H
#define ARRAY_H

#include "Criteria.h"

using namespace std;

template<typename T>
class Array {

	public:
		Array();
		~Array();
		
		void add(T);
		void remove(int);
		int size();
		bool isFull();
		void clear();

		Array<T>& operator+=(const T& value);
		Array<T>& operator-=(const T& value);
		T& operator[](int);
		const T& operator[](int) const;

	private:
		int numElements;
		int* elements;
	
};

template<typename T>
Array<T>::Array(){
	elements = new T[MAX_ARRAY];
	numElements = 0;
}

template<typename T>
Array<T>::~Array(){
	delete [] elements;
}

template<typename T>
void Array<T>::add(T t){
	if (numElements >= MAX_ARRAY)   return;
  	elements[numElements++] = t;
}

template<typename T>
void Array<T>::remove(int t){
	int index = 0;
	while (index < numElements){
		if (t == elements[index]){
			--numElements;
			break;
		}
		++index;
	}

	while (index < numElements){
		elements[index] = elements[index + 1];
		++index;
	}
}

template<typename T>
int Array<T>::size(){
	return numElements;
}

template<typename T>
bool Array<T>::isFull(){
	return numElements >= MAX_ARRAY;
}

template<typename T>
T& Array<T>::operator[](int index) {
	if (index < 0 || index >= numElements) {
            cerr << "Index out of bounds" << endl;
            exit(1);
        }
	return elements[index];
}

template<typename T>
const T& Array<T>::operator[](int index) const {
	if (index < 0 || index >= numElements) {
            cerr << "Index out of bounds" << endl;
            exit(1);
        }
	return elements[index];
}

template<typename T>
Array<T>& Array<T>::operator+=(const T& value) {
	add(value);
	return *this;
}

template<typename T>
Array<T>& Array<T>::operator-=(const T& value) {
	for (int i = 0; i < numElements; i++) {
		if (elements[i] == value) {
			remove(i);
			return *this;
		}
    }
	return *this;
}

template<typename T>
void Array<T>::clear() {
	for(int i = 0; i < numElements; i++) {
		delete elements[i];
	}
}


#endif
