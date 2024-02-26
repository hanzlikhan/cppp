// find the subsequence of a string 
#include <iostream>
#include <vector>
using namespace std;
void f(string &str,int i,string result,vector<string> &li){
    // base case 
    if(i==str.length()){
        li.push_back(result);
        return;
    }
    f(str,i+1,result+str[i],li);
    f(str,i+1,result,li);
}
int main(){
  vector<string> li;
  string str = "abc";
  f(str,0,"",li);
  for(int i=0;i<li.size();i++){
    cout<<li[i]<<" ";
  }
}