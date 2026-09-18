#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size;
    cout << "Enter the maximum length of the string: ";
    cin >> size;
    
    // Clear the input buffer to prevent issues with getline
    cin.ignore();
    
    // Dynamically allocate memory for the string
    char *str = new char[size + 1];
    
    cout << "Enter the string: ";
    cin.getline(str, size + 1);
    
    // Reverse the string
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    
    // Display the reversed result
    cout << "Reversed string: " << str << endl;
    
    // Free the allocated memory
    delete[] str;
    
    return 0;
}
