#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5;
    // int *ptr = &arr[0];
    // cout<<*arr+3<<" "<<*ptr+3<<endl;
    // int (*ptarr)[5]=&arr;
    // cout<<ptarr<<endl;
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<endl;
    }


}