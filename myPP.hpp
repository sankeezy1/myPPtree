/*
    My Parent Pointer declaration file
*/

#include <unordered_map>
#include <vector>

class myPP 
{

private:

    std::unordered_map<int, int> data; // nodes and information in the tree as a hash map

public:

    myPP() {} // constructor
    ~myPP() {} // destructor
    int Find(int key); // find the parent of the node
    void Union(int key1, int key2); // merge two disjoint sets together
    void create(std::vector<int> const& set); // create a parent pointer tree given a set/vector of values

};
