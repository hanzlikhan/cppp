#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int *ptr = &x;
    
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    ptr+2;
    cout<<ptr<<endl;
}