#include <iostream>
using namespace std;
int f(int n){
    // base 
    if(n==0){
        return 0;
    }
    // assumption
    return f(n-1) + ((n%2==0)? (-n) : (n));
}
int main(){
    cout<<f(5);
}