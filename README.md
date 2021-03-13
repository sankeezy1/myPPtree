# myPPtree
A parent pointer tree class for data structures project 2

create() makes a parent pointer tree where the nodes are corresponding to each element in the vector.

Find(element) is given a element to look for and returns the root. This can be optimized with path compression.

Union(element1, element2) is give two elements and is tasked with giving them the same root (union). This can be optimized with union by weight/depth/rank.