#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value pointed to: " << *ptr << endl;
}

int main() {
    // Stack allocation
    int iValue = 42;
    cout << "--- Stack Allocation ---" << endl;
    analyze_pointer(&iValue);
    
    // Heap allocation
    int *heapValue = new int;
    *heapValue = 99;
    cout << "\n--- Heap Allocation ---" << endl;
    analyze_pointer(heapValue);
    
    // Clean up dynamically allocated memory
    delete heapValue;
    
    return 0;
}
