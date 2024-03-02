#include <iostream>
using namespace std;
void crossout(int A[],int N,int k){
    if(A[k] == 1) return;
    for(int L= 2*k; L<=N; L+=k){
        A[L]  = 1;
    }
}
void printPrime(int N){
    int A[N+1];
    for(int k=1;k<=N;k++){
        A[k] =k;
    }
    for(int k=2;k*k <= N;k++){
        crossout(A,N,k);
    }
    for(int k=2;k<=N;k++){
        if(A[k] != 1){
            cout<<A[k]<<" ";
        }
    }
}
int main(){
    int N;
    cout<<"enter a number :";
    cin>>N;
    cout<<"Prime number less than "<<N<<" are :";
    printPrime(N);
    cout<<" "<<endl;
}