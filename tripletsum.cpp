// find the tripletsum 
#include <iostream>
#include<vector>
using namespace std;
int main(){
     int v[] ={3,1,2,4,0,6};
    int x=5;
    int size = 6;
    int triplet =0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(v[i]+v[j]+v[k] == x){
               triplet++;     
                }
            }
        }
    }
    cout<<"triplet sum is"<<triplet<<endl;
}