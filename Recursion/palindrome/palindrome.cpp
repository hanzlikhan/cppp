#include <iostream>
using namespace std;
bool palind(int num,int *temp){
    // base case 
   if(num>=0 && num<=9){
    int lsd = *temp%10;
    *temp /= 10;      // just check for single digit when remain 1...
    return (num==lsd);
   }
    // assumption
    bool result = palind(num/10,temp);
}
int main(){
    int num = 12623;
    int temp = num;
    cout<<palind(num,&temp);
}