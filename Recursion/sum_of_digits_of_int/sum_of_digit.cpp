// find sum of digits of gven integer 

#include <iostream>
using namespace std;
int sum(int n){
   if(n>=0&&n<=9){
    return n;
   }
   return sum(n/10)+n%10;
}
int main(){
    cout<<sum(1234);
}
