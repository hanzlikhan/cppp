// print whole array by recursion
#include <iostream>
using namespace std;
void print(int *arr,int idx,int n){
        if(idx==n){
            return;
        }
        cout<<arr[idx]<<endl;
        print(arr,idx+1,n);
    }    
int main(){
    
    int array[] = {1,2,3,4,5};
    print(array,0,4);
}