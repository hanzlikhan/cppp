#include <iostream>
using namespace std;
int DIV(int j, int k){
    if(k%j == 0){
        return 1;
    }
    else{
        return 0;
    }
}
bool isPrime(int N){
    if(DIV(2,N)==0 && N>2){
        for(int k=3;k*k<=N;k+=2){
            if(DIV(k,N)==1){
                return false;
            }
        }
        return true;
    }
    return false;
}
int main(){
    int N;
    cout<<"Enter a positive integer greater than 10 :";
    cin>>N;
    if(N>10){
        if(isPrime(N)){
            cout<<N<<"is a Prime number"<<endl;
        }else{
            cout<<N<<"is not a prime number"<<endl;
        }
    }else{
        cout<<"please enter a positive integer greater than 10"<<endl;
    }
}