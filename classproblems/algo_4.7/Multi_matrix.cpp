#include <iostream>
#include <vector>
using namespace std;
void MATMUL(vector<vector<int>> &A,vector<vector<int>> &B,vector<vector<int>> &C, int M,int P,int N){
    for(int i = 0; i<M; i++){
        for(int j=0;j<N;j++){
            C[i][j] = 0;
            for(int k=0;k<P;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}
int main(){
    int M = 3;
    int P = 3;
    int N = 3;
    vector<vector<int>> A = {{8,9,3},{5,2,8},{2,1,3}};
    vector<vector<int>> B = {{3,6,2},{7,9,3},{8,2,9}};
    vector<vector<int>>C(M,vector<int>(N));
    MATMUL(A,B,C,M,N,P);
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}