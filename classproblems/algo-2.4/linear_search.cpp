#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,34,64,42,21,60}; 
    int n = 6;
    int target =  64;
    int k = 0;
    int Loc = 0;
    while (k<=n)
    {
        if(target == arr[k]){
            Loc = k;
            break;
        }
        k=k+1;
    }
    
    if(Loc == 0){
        cout<<"target numbr is not present in this array";
    }else{
        cout<<"target number present in array and at location"<<Loc;
    }
}