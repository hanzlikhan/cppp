// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void LinearSearch(int arr[],int n,int item){
    arr[n+1] = item;
    int loc = 0;
    int st = 0;
    while(st<n){
        if(arr[st] == item ){
            loc = st;
        }
        st++;
    }
    if(loc != n+1){
        cout<<"your item are found at "<<loc<<endl;
    }else{
        cout<<"your item are not found"<<endl;
    }
}
int main() {
    int n = 8;
    int arr[n] = {24,82,12,33,45};
    int item = 12;
    
    LinearSearch(arr,n,item);
}