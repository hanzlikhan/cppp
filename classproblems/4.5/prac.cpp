#include <iostream>
using namespace std;
int linear(int data[],int n,int item){
   data[n] = item;
    int loc = 0;
    while (data[loc]!=item)
    {
        loc++;
    }
    if (loc == n)
    {
        loc = 0;
    }
    return loc;
    
    
}
int main(){
    
    int data[] = {1,2,3,4,5};
    int n = 5;
    int item = 3;
   int loc =  linear(data,n,item);
   if(loc !=0){
    cout<<"item found at location "<<loc<<endl;
   }else{
    cout<<"item not found";
   }
}
