// rotate twice times array
#include <iostream>
#include <vector>
using namespace std;
void rota(int array[],int n){
    int k = 2;
    k = k%n;
    int j = 0;
    int ansarray[5];
    for(int i=n-k;i<n;i++){
        ansarray[j++] = array[i];
    }
    for(int i=0;i<=k;i++){
        ansarray[j++] =array[i];
    }
    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
}
int main(){
    int array[] = {1,2,3,4,5};
    rota(array,5);
}