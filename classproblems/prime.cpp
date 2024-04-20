#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void crossout(vector<int> &arr, int n, int k) {
    if (arr[k] == 0) {
        return;
    }
    for (int i = 2*k; i <= n; i += k) {
        arr[i] = 0;
    }
    return;
}

int main() {
    int n = 11; // Adjusted to 11 for a range from 2 to 10
    vector<int> arr(n + 1, 1); // Initialize all elements as 1 (assuming prime)

    for (int i = 2; i <= sqrt(n); i++) {
        crossout(arr, n, i);
    }

    for (int i = 2; i <= n; i++) {
        if (arr[i] != 0) { // Only print if it's not crossed out (marked as 0)
            cout << i << " ";
        }
    }

    return 0;
}
