#include <iostream>
using namespace std;

int main(){
    int data[] = {10,35,87,39,14,67};
    int n = 6;
    int k = 1,Loc = 0 , Max = data[0];
    while(k<=n){
        if(Max < data[k]){
            Loc = k;
            Max = data[k];
        }
        k=k+1;
    }
    cout<<Loc<<" "<<"max is"<<Max;
}