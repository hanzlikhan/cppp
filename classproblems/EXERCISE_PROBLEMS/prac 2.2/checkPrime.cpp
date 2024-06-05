#include <iostream>
using namespace std;
int DIV(int j,int K){
    if(K%j==0){
        return 1;
    }else{
        return 0;
    }
}
bool isPrime(int n){
    int check = DIV(2,n);
    if(check == 0 && n>2){
        for(int k=3;k*k<=n;k+=2){
            if(DIV(k,n)==1){
                return false;
            }
        }
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    if(n>10){
        if(isPrime(n)){
            cout<<"your entered number is Prime number";
        }else{
            cout<<"not prime";
        }

    }else{
        cout<<"please enter number greater than 10";
    }
}