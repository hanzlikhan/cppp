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
    int check = DIV(2,N);
    if(check==0 && N>2){
        for(int k=3;k*k<=N;k+=2){
            if(DIV(k,N)==1){
                return false;
            }
        }
        return true;
    }
    return false;
}
