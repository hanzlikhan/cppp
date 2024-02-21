#include <iostream>
using namespace std;
int main(){
    int Data[] = {400,200,500,90,300,100,250,70,480,190};
    int N = 9;
    int k=0;
    int Loc = 0;
    int Max = Data[0];
    while(k<=N){
        k= k+1;
        if(k>N){
            cout<<"Loc is :"<<Loc<<" "<<"and maximum value is :"<<Max<<endl;
        }else{
            if(Max<Data[k]){
                Loc = k;
                Max = Data[k]; 
            }
        }
    } 
}