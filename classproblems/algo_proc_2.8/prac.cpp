#include <iostream>
using namespace std;
int main(){
    int data[] = {23,54,65,77,443,23,855};
    int n = 7;
    int first = data[0];
    int sec= data[1];
    int loc1 = 0;
    int loc2= 0;
    if(first<sec){
        int temp = first;
        first = sec;
        sec = temp;
        loc1 = 1;
        loc2 = 0;
          }
        for(int k=2;k<=n;k++){
            if(sec<data[k]){
                sec = data[k];
                loc2= k;
            }
            if(first<data[k]){
                sec = first;
                first = data[k];
                loc2 = loc1;
                loc1 = k;
            }
      


        }
        cout<<"first largest is at"<<loc1<<"second is at"<<loc2;
}