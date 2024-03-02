#include <iostream>

// Simple linear congruential generator for generating pseudo-random numbers
unsigned int rand_seed = 123456789; // Seed for the random number generator

unsigned int custom_rand() {
    rand_seed = rand_seed * 1103515245 + 12345;
    return (rand_seed / 65536) % 32768;
}

// Subprogram COUNT to find the number of times LO is updated
void COUNT(double A[], int N, int &C) {
    C = 0;
    for (int i = 0; i < N; ++i) {
        double max_val = -1; // assuming all elements are positive
        for (int j = i; j < N; ++j) {
            if (A[j] > max_val) {
                max_val = A[j];
                ++C;
            }
        }
    }
}

// Procedure P2.27 to generate random numbers and find C using COUNT
int P2_27(int N) {
    double A[N];
    // Generate random numbers between 0 and 1
    for (int i = 0; i < N; ++i) {
        A[i] = static_cast<double>(custom_rand()) / 32767.0;
    }
    int C;
    COUNT(A, N, C);
    return C;
}

int main() {
    int sum_C = 0;
    int N = 3; // Change N value here
    for (int i = 0; i < 1000; ++i) {
        int C = P2_27(N);
        sum_C += C;
    }
    double average_C = static_cast<double>(sum_C) / 1000;
    std::cout << "Average C for N=3: " << average_C << std::endl;
    
    return 0;
}