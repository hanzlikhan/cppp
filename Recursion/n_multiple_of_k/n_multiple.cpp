//  print n multiple 
#include <iostream>
using namespace std;
void print(int n , int k){
    // base case 
if(k==0)return;
// assumption
print(n,k-1);
cout<<n*k<<" ";
}
int main(){
print(5,5);
}