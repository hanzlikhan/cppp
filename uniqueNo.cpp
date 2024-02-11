// find the unique no which is not in pair form 
#include <iostream>
using namespace std;
int main(){
    int v[] = {2,3,1,3,2,4,1};
    int size = 7;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(v[i]==v[j]){
                v[i]=v[j] = -1;
            }
        }
    }
    int unique = 0;
    for(int i=0;i<size;i++){
        if(v[i]>0){
            unique= v[i];
        }
    }
    cout<<"unique value is "<<unique;
}