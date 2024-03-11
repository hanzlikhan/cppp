#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int data[], int n, int item, int locations[], int& count) {
    // Initialize counter
    count = 0;

    // Search for ITEM
    for (int i = 0; i < n; i++) {
        if (data[i] == item) {
            locations[count++] = i; // Store location
        }
    }

    return count; // Return the count of occurrences
}

int main() {
    int data[] = {1, 2, 3, 4, 5, 3, 6, 3}; // Example data array
    int n = 8; // Number of elements in the array
    int item = 3; // Item to search for
    int locations[n]; // Array to store locations
    int count; // Variable to store the count of occurrences

    // Perform linear search
    int occurrences = linearSearch(data, n, item, locations, count);

    if (occurrences > 0) {
        cout << "Item found at locations: ";
        for (int i = 0; i < count; i++) {
            cout << locations[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Item not found." << endl;
    }

    return 0;
}
