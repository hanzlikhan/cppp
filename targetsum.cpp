// find the numbe rof pairs in the array whose sum is equal to given value 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cout<<"enter the array values :";
        cin>>v[i];
    }
    int x;
    cout<<"enter the value of x :";
    cin>>x;
    int pair =0;
    for(int i=0;i<v.size();i++){
       for(int j=i+1;j<v.size();j++){
         if(v[i]+v[j]==x){
            pair++;
       }
        }
    }
    cout<<"total number of pair in this array which sum is equal to x is :"<<pair<<endl;
}
