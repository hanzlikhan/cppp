#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int LA [n] = {37,82,23,98,45};
    int k = 3;
    int item = LA[k];
    // for (int j = k; j <= n-1; j++)
    // {
    //     LA[j] = LA[j+1];
    // }
    for (int j = k; j<n-1;j++){
        LA[j] = LA[j+1];
    }
    n = n-1;
    for(int i=0;i<n;i++){
        cout<<LA[i]<<" ";
    }
    
    
}