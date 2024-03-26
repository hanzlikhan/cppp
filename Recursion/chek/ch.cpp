#include <iostream>
using namespace std;
int main()
{
    int n;
    for(int i=1;i<=10;i++){
        cin>>n;
        if(n%2==0){
            cout<<"even number";
        }else{
            cout<<"odd number";
        }
    }
}