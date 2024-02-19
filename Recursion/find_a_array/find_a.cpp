#include<iostream>
using namespace std;
string find(string &arr,int idx,int n){
    if(idx==n){
        return "";
    }
    string curr = "";
    curr += arr[idx];
    return ((arr[idx]=='a')? "": curr)+find(arr,idx-1,n);
}
int main(){
    string s= "abdda"; 
    int n = 5;
    cout<<find(s,0,n);
}