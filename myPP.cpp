/*
    My data Pointer implementation file
*/

#include "myPP.hpp"

// use a vector
// ex: vector<int> set(100); set of 100 nodes all 0's
// ex: vector<int> set = {1, 2, 3, 4}; make a set of 4 nodes numbered as node 1, node 2,... etc
// set depth of each node to 0 (default depth of a node/single-element set)
void myPP::create(std::vector<int> const& set)
{
    for (int i: set)
    {
        data[i] = i;
    }
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


