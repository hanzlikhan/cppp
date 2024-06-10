#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {23,61,72,82,73};
    int k = 3;
    int item = 637;
    int j  = n;

    while(j>=k){
        arr[j+1] = arr[j];
        j--;
    }
    arr[k] = item;
    n = n+1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}