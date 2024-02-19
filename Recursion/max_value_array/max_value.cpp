// find the maximum in the array by recursion
#include <iostream>
using namespace std;
int print(int arr[],int idx,int n){
    // base case:
    if(idx == n-1){
        return arr[idx];
    }
    // assumption
    return max(arr[idx],print(arr,idx+1,n));
}
int main(){
    int arr[] ={3,6,2,8,5,1};
    cout<<print(arr,0,5);
}