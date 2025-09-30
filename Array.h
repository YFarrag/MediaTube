#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cstdlib>
#include "defs.h"

using namespace std;

template <class T>
class Array {
  public:
    Array();
    ~Array();

    Array& operator+=(const T&);
    Array& operator-=(const T&);
    T& operator[](int);
    const T& operator[](int) const;

    int getSize() const;
	void clear() {
		numElements = 0;
	  }
	  
    bool isFull() const;

  private:
    int numElements;
    T* elements;
};

template <class T>
Array<T>::Array() {
  elements = new T[MAX_ARR];
  numElements = 0;
}

template <class T>
Array<T>::~Array() {
  delete[] elements;
}

template <class T>
Array<T>& Array<T>::operator+=(const T& item) {
  if (numElements >= MAX_ARR) return *this;
  elements[numElements++] = item;
  return *this;
}

template <class T>
Array<T>& Array<T>::operator-=(const T& item) {
  int index = 0;
  while (index < numElements) {
    if (item == elements[index]) {
      --numElements;
      break;
    }
    ++index;
  }
  while (index < numElements) {
    elements[index] = elements[index + 1];
    ++index;
  }
  return *this;
}

template <class T>
T& Array<T>::operator[](int index) {
  if (index < 0 || index >= numElements) {
    cerr << "Array index out of bounds" << endl;
    exit(1);
  }
  return elements[index];
}

template <class T>
const T& Array<T>::operator[](int index) const {
  if (index < 0 || index >= numElements) {
    cerr << "Array index out of bounds" << endl;
    exit(1);
  }
  return elements[index];
}

template <class T>
int Array<T>::getSize() const {
  return numElements;
}

template <class T>
bool Array<T>::isFull() const {
  return numElements >= MAX_ARR;
}

#endif
