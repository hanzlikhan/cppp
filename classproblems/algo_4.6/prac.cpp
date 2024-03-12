#include<iostream>
using namespace std;
int Binary(int DATA[],int item,int N){
    int beg = 0;
    int end = N-1;
    int loc = -1;
    while (beg<=end)
    {
        int mid = (beg + end)/2;
        if(DATA[mid]==item){
            loc = mid;
        }else if(DATA[mid]>item){
            end = mid-1;
        }else{
            beg = mid + 1;
        }
    }
    return loc;
    
}
int main(){
    int DATA[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(DATA)/sizeof(DATA[0]);
    int item = 8;
    int loc = Binary(DATA,item,n);
    if(loc != -1){
        cout<<"item found at loc at"<<loc<<endl;
    }else{
        cout<<"item not found";
    }
}