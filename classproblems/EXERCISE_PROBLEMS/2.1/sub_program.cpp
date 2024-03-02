#include <iostream>
using namespace std;
int DIV(int j,int k){
    if(k%j == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int j,k;
    cout<<"Enter two positive integers :";
    cin>>j>>k;
    if(j>0 && k>0){
        int result = DIV(j,k);
        cout<<"DIV("<<j<<","<<k<<") ="<<result<<endl;
    }
    else{
        cout<<"please enter a positive integers"<<endl;
    }
}