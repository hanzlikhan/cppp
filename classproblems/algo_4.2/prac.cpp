#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int data[n]  = {23,56,23,64,83,44,40};
    int k = 3;
    int item = 50;
    int j = n;
    while (j>=k)
    {
        data[j+1] = data[j];
        j--;
    }
    data[k] = item;
    n= n+1;
    
    for(int i = 0;i<n;i++){
        cout<<data[i]<<" ";
    }
}