#include <iostream>
#include <vector>
using namespace std;
int main(){
    int M = 3;
    int P = 3;
    int N = 3;
    int A[M][P] = {{8,9,3},{5,2,8},{2,1,3}};
    int B[P][N] = {{3,6,2},{7,9,3},{8,2,9}};
    int C[M][N];
    for(int i = 0; i<M; i++){
        for(int j=0;j<N;j++){
            C[i][j] = 0;
            for(int k=0;k<P;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}