#ifndef MYPP_HPP
#define MYPP_HPP

/*
    My Parent Pointer declaration file
*/

class myPP
{

private:

    int *parent;
    int *depth;

public:

    myPP(int); // def constructor
    ~myPP(); // destructor
    int Find(int element); // find the parent of the element
    void Union(int element1, int element2); // merge two disjoint sets together given two elements
    void create(int size); // create a parent pointer tree given a set/vector
};

#endif
