#include <iostream>
using namespace std;
int f(int *arr,int n ,int i){
    if(i==n-1){
        return 0;
    }
    if(i==n-2){
        return f(arr,n,i+1) + abs(arr[i] - arr[i+1]);
    }
    return min((f(arr,n,i+1) + abs(arr[i]-arr[i+1])),(f(arr,n,i+2) + abs(arr[i] - arr[i+2])));
}
int main(){
    int arr[] = {10,25,40,32,89,53,79};
    cout<<f(arr,7,0);
}