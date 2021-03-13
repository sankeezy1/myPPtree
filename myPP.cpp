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
        depth[i] = 0;
    }
}
// give an element and finds the root
int myPP::Find(int element)
{
    // if element isn't the root
    if (data[element] != element)
    {
        // path compression
        // makes nodes that have the same root node but not the same parent have the same parent (the root)
        data[element] = Find(data[element]);
    }

    return data[key];
}

void myPP::Union(int element1, int element2)
{
    // Find roots
    int x = Find(key1);
    int y = Find(key2);

    // if they are from the same root, return
    if (x == y)
    {
        std::clog << "These elements have the same root\n";
        return;
    }
    // weighted union
    // attach smaller depth tree to the tree with larger depth
    if (depth[x] > depth[y])
    {
        data[y] = x;
    }
    else if (depth[x] < depth[y])
    {
        data[x] = y;
    }
    else
    {
        data[x] = y;
        depth[y]++;
    }
}


