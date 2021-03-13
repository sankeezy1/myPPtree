/*
    My Parent Pointer declaration file
*/

#include <unordered_map>
#include <vector>

class myPP 
{

private:

    std::unordered_map<int, int> data;
    std::unordered_map<int, int> rank;

public:

    myPP() {}
    ~myPP() {}
    int Find(int key);
    void Union(int key1, int key2);
    void create(std::vector<int> const& set);

};
