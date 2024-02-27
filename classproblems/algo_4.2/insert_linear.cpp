#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int LA[n] = {23,84,39,61,88,73};
    int j = n;
    int Item = 50;
    int k = 5;
    while (j>=k)
    {
        LA[j+1] = LA[j];
        j =j-1;
    }
    
    LA[k] = Item;
    n = n+1;
    for(int i = 0;i<n;i++){
        cout<<LA[i]<<" ";
    }
    
}