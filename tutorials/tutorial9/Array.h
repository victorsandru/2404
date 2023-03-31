
#ifndef ARRAY_H
#define ARRAY_H

#include "Date.h"

using namespace std;

template<typename T>
class Array {

	public:
		Array();
		~Array();
		
		void add(T);
		void remove(int);
		int getSize();
		bool isFull();
		void clear();

		Array<T>& operator+=(const T& value);
		Array<T>& operator-=(const T& value);
		T& operator[](int);
		const T& operator[](int) const;

	private:
		int numElements;
		T* elements;
};

template<typename T>
Array<T>::Array(){
	elements = new T[MAX_ARR];
	numElements = 0;
}

template<typename T>
Array<T>::~Array(){
	delete [] elements;
}

template<typename T>
void Array<T>::add(T t){
	if (numElements >= MAX_ARR)   return;
  	elements[numElements++] = t;
}

template<typename T>
void Array<T>::remove(int t){
	for(int i = t; i < numElements - 1; ++i) {
		elements[i] = elements[i + 1];
	}
	--numElements;

}

template<typename T>
int Array<T>::getSize(){
	return numElements;
}

template<typename T>
bool Array<T>::isFull(){
	return numElements >= MAX_ARR;
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
	numElements = 0;
}


#endif
