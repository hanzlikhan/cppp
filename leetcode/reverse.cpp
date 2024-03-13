#include<iostream>
using namespace std;
int rev(int num){
    int r = 0;
   while(num>0){
     r = r*10+ num%10;
     num/=10;
   }
   return r;
}
int main(){
    int num;
    cin>>num;
    cout<<"reverse of your given number is :"<<rev(num);
}