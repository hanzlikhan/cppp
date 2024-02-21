#include <iostream>
using namespace std;
    int pow(int p,int q){
        if(p==0)return 1;
        return p * pow(p,q-1);
    }
    int f(int n,int d){
        if(n==0) return 0;
        return pow(n%10,d) + pow(n/10,d);
    }
int main(){
    int n ;
    cout<<"enter a number ";
    cin>>n;
    int no_of_digits=0;
    int temp = n;
    while (temp>0)
    {
       temp = temp/10;
       no_of_digits++;
    }
    int result = f(n,no_of_digits);
    if(result == n)
{
    cout<<" yes this number is armstrong "<<endl;
}    else{
    cout<<"no this is not a armstrong";
}
}