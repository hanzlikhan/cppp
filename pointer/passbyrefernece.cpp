#include <iostream>
using namespace std;
void find(string var,char ch,int *first,int *last){
    for(int i=0;i<var.size();i++){
        if(var[i]==ch){
            *first = i;
            break;
        }
    }
    for(int i=var.size()-1; i>=0;i--){
        if(var[i]==ch){
            *last = i;
            break;
        }
    }
}
int mai(){
    string var = "ahjdhabjd";
    char ch = 'a';
    int first = -1;
    int last = -1;
    int *fp = &first;
    int *lp = &last;
    find(var,ch,fp,lp);
    cout<<first<<" "<<last;
}