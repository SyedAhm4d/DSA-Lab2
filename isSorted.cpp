#include <iostream>
#include <cassert>
using namespace std;

// 1. An array already sorted in ascending order.
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

// 2. An unsorted array.
void testUnsortedArray() {
    int arr[] = {1, 3, 2, 4, 5};
    assert(isSorted(arr, 5) == false);
}

// 3. A sorted array containing duplicate values.
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

// 4. An array containing only one element.
void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
}

// 5. An array sorted in descending order.
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

// 6. An array containing negative values.
void testNegativeValues() {
    int arr[] = {-5, -2, 0, 3, 7};
    assert(isSorted(arr, 5) == true);
}

int main() {
    return 0;
}
