#include <iostream>
using namespace std;
int main(){
    int a = 10;
    for(int i= 1 ; i<a+1 ;i++){
        cout<<a*i;
        if (i != a){
            cout<<"found";
        }else{
            cout<<"not found";
        }
    }
}