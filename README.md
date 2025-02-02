# C++ Vector Iterator Invalidation Bug
This repository demonstrates a common error in C++ when iterating and modifying a `std::vector` simultaneously.  The bug arises from the fact that erasing an element from a vector invalidates iterators pointing to elements beyond the removed element.

The `bug.cpp` file contains the erroneous code. The `bugSolution.cpp` file provides a corrected version.

## How to Reproduce
1. Clone this repository.
2. Compile and run `bug.cpp` (you'll likely get unexpected output).
3. Compile and run `bugSolution.cpp` (this will produce the correct output).

## Explanation
The original code incorrectly uses an index-based loop and removes elements while iterating. After removing an element, subsequent elements shift, invalidating indices.  The solution demonstrates safer methods such as using iterators with `std::vector::erase` or using a reverse iterator to avoid this issue.
