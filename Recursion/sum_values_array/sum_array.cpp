// find the sum of values in the array
#include <iostream>
using namespace std;
int print(int arr[],int idx,int n){
    if(idx == n-1){
        return arr[idx];
    }
    return arr[idx]+print(arr,idx+1,n);
}
int main(){
    int arr[] = {1,2,3,4,5};
    cout<<"sum of all number is"<<print(arr,0,5);
}