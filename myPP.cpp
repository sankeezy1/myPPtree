/*
    My data Pointer implementation file
*/

#include "myPP.hpp"

template <class T>
int myPP<T>::Find(int key) {

    if (data[key] == key){
        return key;
    }

    return find(data[key]);
}

template <class T>
void myPP<T>::Union(int key1, int key2) {

    int x = Find(key1);
    int y = Find(key2);

    data[x] = y;
}

template <class T>
void myPP<T>::create(std::vector<T> const& set) {
    for (int i: set) {
        set[i] = i;
    }
}
