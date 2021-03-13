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

int myPP::Find(int key)
{
    // if key is found
    if (data[key] == key)
    {
        return key;
    }

    return Find(data[key]); // recursion to find key
}

void myPP::Union(int key1, int key2)
{
    // Find roots
    int x = Find(key1);
    int y = Find(key2);

    data[x] = y;
}


