/*
    My data Pointer implementation file
*/

#include "myPP.hpp"

int myPP::Find(int key)
{

    if (data[key] != key)
    {
        data[key] = Find(data[key]);
    }

    return data[key];
}

void myPP::Union(int key1, int key2)
{
    // Find roots
    int x = Find(key1);
    int y = Find(key2);

    if (x == y)
    {
        return;
    }

    if (rank[x] > rank[y])
    {
        data[y] = x;
    }
    else if (rank[x] < rank[y])
    {
        data[x] = y;
    }
    else
    {
        data[x] = y;
        rank[y]++;
    }
}

void myPP::create(std::vector<int> const& set)
{
    for (int i: set)
    {
        data[i] = i;
        rank[i] = 0;
    }
}
