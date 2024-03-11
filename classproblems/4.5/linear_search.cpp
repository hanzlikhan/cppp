#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int data[], int n, int item) {
    // Insert ITEM at the end of DATA
    data[n] = item;
    
    // Initialize counter
    int loc = 0;
    
    // Search for ITEM
    while (data[loc] != item) {
        loc++;
    }
    
    // Check if search was successful
    if (loc == n) {
        loc = 0; // Unsuccessful search
    }
    
    return loc;
}

int main() {
    int data[] = {1, 2, 3, 4, 5}; // Example data array
    int n = 5; // Number of elements in the array
    int item = 3; // Item to search for
    
    int loc = linearSearch(data, n, item);
    
    if (loc != 0) {
        cout << "Item found at index: " << loc << endl;
    } else {
        cout << "Item not found." << endl;
    }
    
    return 0;
}