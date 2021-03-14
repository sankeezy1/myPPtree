# myPPtree
A parent pointer tree as a C++ class for data structures project 2.

Main branch has path compression/weighted union.

Naive branch doesn't have these optimizations.

constructor(int) given an int creates a set of nodes

.create(int) given an int creates a set of nodes

.Find(int) given an element, return the root. This can be optimized with path compression.

.Union(int1, int2) given two elements, make them part of the same disjointed-set/tree. This can be optimized with union by weight.