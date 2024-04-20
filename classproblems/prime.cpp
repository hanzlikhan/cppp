#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
void crossout(vector<int> arr,int n,int k){
    if(arr[k] == 1){
        return;
    }
    for (int i = 2*k; i < n; i+=k)
    {
        arr[i] = 0;
    }
    return;
}
int main(){
    int n = 10;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for (int i = 0; i <=sqrt(n) ; i++)
   {
    crossout(arr,n,i);
   }
   


}