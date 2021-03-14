/*
    My parent Pointer implementation file
*/

#include "myPP.hpp"
#include <iostream>

// create array of size 'size'
// set depth of each node to 0 (default depth of a node/single-element set)

myPP::myPP(int size)
{
    parent = new int[size];
    depth = new int[size];

    for (int i = 0; i < size; i++)
    {
        parent[i] = i;
        depth[i] = 0;
    }
}

// destructor
myPP::~myPP()
{
    if (parent != nullptr && depth != nullptr)
    {
        delete [] parent;
        parent = nullptr;
        delete [] depth;
        depth = nullptr;
    }
}

void myPP::create(int size)
{
    parent = new int[size];
    depth = new int[size];
}

int myPP::Find(int element)
{
    // if element is found
    if (data[element] == element)
    {
        return element;
    }

    return Find(data[element]); // recursion to find element
}

void myPP::Union(int element1, int element2)
{
    // Find roots
    int x = Find(element1);
    int y = Find(element2);

    data[x] = y;
}
