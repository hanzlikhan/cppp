#include <iostream>
using namespace std;
bool palind(int x){
    if(x<0) return false;
    int temp = x;
    int  rev = 0;
    while (temp != 0) {
        int dg = temp%10;
        rev = rev * 10 + temp;
        temp /= 10;
    }
    return (rev==x);
} 
int main(){
    bool res = palind(121);
    if(res == 'true') {
        cout << "The number is a Palindrome."<< endl;
    }else{
        cout << "The number is not a Palindrome"<<endl;
    }
}