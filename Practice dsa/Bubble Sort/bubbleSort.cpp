// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    int k = 0;
    while(k<n){
        int ptr = 0;
        while(ptr<=n-k){
            if(arr[ptr]>arr[ptr+1]){
                int temp = arr[ptr];
                arr[ptr] = arr[ptr+1];
                arr[ptr+1] = temp;
            }
            ptr += 1;
        }
        k = k+1;
    }
}
int main() {
    int n = 5;
    int arr[n] = {24,82,12,33,45};
    BubbleSort(arr,n);
    cout<<"bubble sorted array is :";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}