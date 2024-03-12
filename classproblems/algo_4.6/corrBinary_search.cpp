#include <iostream>
using namespace std;

int main() {
    int N = 9;
    int DATA[N] = {23, 25, 30, 33, 54, 55, 60, 84, 90}; // Data needs to be sorted for binary search
    int ITEM = 25;
    int BEG = 0;
    int END = N - 1;
    int LOC = -1; // Initialize LOC to -1, indicating item not found
    while (BEG <= END) {
        int MID = (BEG + END) / 2;
        if (DATA[MID] == ITEM) {
            LOC = MID;
            break; // If item found, exit the loop
        } else if (DATA[MID] < ITEM) {
            BEG = MID + 1;
        } else {
            END = MID - 1;
        }
    }
    if (LOC != -1) {
        cout << "Item found at index: " << LOC << endl;
    } else {
        cout << "Item not found" << endl;
    }
    return 0;
}
