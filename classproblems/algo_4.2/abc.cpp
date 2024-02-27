#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int LA[n] = {23,84,39,61,88,73};
    int j = n;
   LA[j+1] = LA[j-1];
   cout<<LA[j+1];
}