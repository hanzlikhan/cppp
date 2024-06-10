#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {12,43,27,72,13};
    int k = 2;
    for(int i = k; i<n;i++){
        arr[i] = arr[i+1];
    }
    n = n-1;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}