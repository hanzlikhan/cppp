#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {1,2,3,4,5,6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int j = n;
    int k = 3;
    int item = 9;
    while(j>=k){
        arr[j+1] = arr[j];
        j--;
    }
    arr[k] = item;
    n = n+1;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}