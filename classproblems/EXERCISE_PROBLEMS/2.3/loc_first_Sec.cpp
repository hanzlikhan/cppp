#include <iostream>
using namespace std;
void findLargeElements(int data[],int N, int& loc1,int& loc2){
    loc1 = 0;
    loc2 = 0;
    for(int i=1; i<N;i++){
        if(data[i]>data[loc1]){
            loc2 = loc1;
            loc1 = i;
        }else if(data[i]>data[loc2] && data[i] != data[loc1]){
            loc2 = i;
        }
    }
}
int main(){
    int data[] = {70,30,25,80,60,50,30,75,25,60};
    int N = sizeof(data)/sizeof(data[0]);
    int loc1,loc2;
    findLargeElements(data,N,loc1,loc2);
    cout<<"Location of largest Element is :"<<loc1<<endl;
    cout<<"Location of second largest Element is :"<<loc2<<endl;
}