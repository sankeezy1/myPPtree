# myPPtree
A parent pointer tree as a C++ class for data structures project 2

create(vector) makes a parent pointer tree where each node is corresponding to each element in the vector.

Find(element) is given a element to look for and returns the root. This can be optimized with path compression.

Union(element1, element2) is give two elements and is tasked with giving them the same root (union). This can be optimized with union by weight/depth/rank.