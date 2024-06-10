#include <iostream>
using namespace std;
int main(){
    int arr[] = {12,43,78,24,92};
    int lb = 0;
    int ub = sizeof(arr)/sizeof(arr[0]);
    int k = lb;
    while(k < ub){
        cout<<arr[k]<<" ";
        k = k+1;
    }

}