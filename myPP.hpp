/*
    My Parent Pointer declaration file
*/

#include <unordered_map>
#include <vector>

template <class T>
class myPP {

public:
    std::unordered_map<int, T> data;
    int Find(int key);
    void Union(int key1, int key2);
    void create(std::vector<T> const& set);

};
