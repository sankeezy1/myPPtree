# myPPtree
A parent pointer tree as a C++ class for data structures project 2.

Main branch has path compression/weighted union.

Naive branch doesn't have these optimizations.


create(NODES) creates a parent pointer tree with number of nodes of amount NODES

Find(element) given an element, return the root. This can be optimized with path compression.

Union(element1, element2) given two elements, make them part of the same disjointed-set/tree. This can be optimized with union by weight.