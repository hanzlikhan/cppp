// print n natural number 
#include <iostream>
using namespace std;
void print(int n){
    // base case 
    if(n<1){return;}
    print(n-1);
    cout<<n<<" ";
}
int main(){
    print(5);
}