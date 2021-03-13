# myPPtree
A parent pointer tree as a C++ class for data structures project 2.

Main branch has path compression/weighted union.

Naive branch doesn't have these optimizations.


create(vector) creates a parent pointer tree where each node is corresponding to each element in the vector.

Find(element) given an element, return the root. This can be optimized with path compression.

Union(element1, element2) given two elements, make them part of the same set. This can be optimized with union by weight/depth/rank.