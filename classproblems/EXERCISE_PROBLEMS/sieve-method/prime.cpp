#include <iostream>
using namespace std;
void PrimeSieve(int N){
    int Prime[100] = {0};
    for(int i=2;i<=N;i++){
        if (Prime[i]==0)
        {
            for (int j = i*i; j <= N; j+=i)
            {
                Prime[j] = 1;
            }
        }
    }
    for(int i = 2; i<=N;i++){
        if(Prime[i]==0){
            cout<<i<<" ";
        }
    }
           cout<<endl;
}
int main(){
    int N;
    cout<<"Enter a number";
    cin>>N;
    PrimeSieve(N);
}