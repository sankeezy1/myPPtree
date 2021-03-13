/*
    My Parent Pointer declaration file
*/

#include <unordered_map>
#include <vector>

class myPP 
{

private:

    std::unordered_map<int, int> data; // nodes and information in the tree as a hash map
    std::unordered_map<int, int> depth; // rank/depth of the tree

public:

    myPP() {} // def constructor
    ~myPP() {} // def destructor
    int Find(int element); // find the parent of the element
    void Union(int element1, int element2); // merge two disjoint sets together given two elements
    void create(std::vector<int> const& set); // create a parent pointer tree given a set/vector

};
