#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {22,4,23,78,45};
    int k = 0;
    while(k<n-1){
        int ptr = 0;
        while(ptr<=n-k){
            if(arr[ptr]>arr[ptr+1]){
                int temp = arr[ptr];
                arr[ptr] = arr[ptr+1];
                arr[ptr+1] = temp;
             
            }
               ptr = ptr+1;
        }
        k=k+1;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}