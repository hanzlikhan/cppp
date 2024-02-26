#include <iostream>
using namespace std;
int Find(int DATA[],int n, int loc1,int loc2){
   int first = DATA[0];
   int sec = DATA[1];
   if(first<sec){
    int temp = first;
    first = sec;
    sec = temp;
    loc1=1;
    loc2=0;
   }
   for(int k=2;k<=n;k++){
    if(first<DATA[k]){
        sec=first;
        first = DATA[k];
        loc2 = loc1;
        loc1 = k;
    }
    else if (sec<DATA[k]){
        sec = DATA[k];
        loc2 = k;
    }
   }
    cout<<"first largest is at"<<loc1<<"second is at"<<loc2;
    return;
}
int main(){
    int DATA[] = {10,46,72,62,70,50,38};
    int N = 7;
    Find(DATA,7,0,0);
    // cout<<"first largest is at"<<loc1<<"second is at"<<loc2;
}