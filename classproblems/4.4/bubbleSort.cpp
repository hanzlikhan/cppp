#include <iostream>
using namespace std;

// BUBBLE function sorts an array using the bubble sort algorithm
void BUBBLE(int DATA[], int N) {
    for(int k=0; k<N-1; k++) {
        int Ptr = 0;
        while (Ptr<N-k) {
            if (DATA[Ptr] > DATA[Ptr+1]) {
                // swap the elements
                int temp = DATA[Ptr];
                DATA[Ptr] = DATA[Ptr + 1];
                DATA[Ptr + 1] = temp;
            }
            Ptr++;
        }
    }
}

int main() {
    int N = 8;
    int DATA[] = {32,51,27,85,66,23,13,57};

    // sort the array
    BUBBLE(DATA, N);

    // print the sorted array
    cout << "The sorted array is : ";
    for(int i=0;i<N;i++) {
        cout << DATA[i] << " ";
    }
    cout << endl;

    return 0;
}