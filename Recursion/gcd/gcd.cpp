#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(b>a) return gcd(a,b%a);
    if(b==0) return a;
    if(a>b) return gcd(b,a%b);
}
int main(){
    cout<<gcd(334,78);
}