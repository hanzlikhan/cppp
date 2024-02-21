// given an array integers and target value x. print whether x exist or not. 
#include <iostream>
using namespace std;
bool f(int *arr,int n,int i,int x){
    // base case 
    if(i==n){
        return false;
    }
    // assumption
   return (arr[i]==x) || f(arr,n,i+1,x);
}
int main(){
    int arr[] = {5,4,1,8,6,3,0,-4};
    int n = 8;
    int res = f(arr,n,0,8);
    if(res == 1){
        cout<<" x exist in the array";
    }else {
        cout<<"x does not exist in the array";
    }
}