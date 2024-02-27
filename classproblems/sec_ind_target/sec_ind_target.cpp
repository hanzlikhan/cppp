#include <iostream>
using namespace std;

int main(){
    int arr[] = {20,46,28,78,63,46,88};
    int target = 46;
    int n = 7;
    int count = 0;
    int loc =0;
    for(int i=0;i<n;i++){
        if(target == arr[i]){
            count++;
            loc = i;
        }   
    }
    if(count == 2){
        cout<<"target present in two index "<<loc<<endl;
    }else if(count == 1){
        cout<<"target present only at one index"<<endl;
    }else{
        cout<<"target not present in this array";
    }
}