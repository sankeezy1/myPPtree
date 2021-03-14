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

// give an element and finds the root
int myPP::Find(int element)
{
    // if element isn't the root
    if (parent[element] != element)
    {
        // path compression
        // makes nodes that have the same root node but not the same parent have the same parent (the root)
        parent[element] = Find(parent[element]);
    }

    return parent[element];
}

void myPP::Union(int element1, int element2)
{
    // Find roots
    int x = Find(element1);
    int y = Find(element2);

    // if they are from the same root, return
    if (x == y)
    {
        // std::clog << "These elements have the same root\n";
        return;
    }
    // weighted union
    // attach smaller depth tree to the tree with larger depth
    if (depth[x] > depth[y])
    {
        parent[y] = x;
    }
    else if (depth[x] < depth[y])
    {
        parent[x] = y;
    }
    else
    {
        parent[x] = y;
        depth[y]++;
    }
}
