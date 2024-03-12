#include <iostream>
using namespace std;

int main(){
    int N = 9;
    int DATA[N] = {23,54,84,33,23,60,55,25,30};
    int BEG = 0;
    int ITEM = 25;
    int END = N-1;
    int LOC = 0;
    int MID = (BEG+END)/2;
    while(BEG <= END && DATA[MID] != ITEM){
        if(DATA[MID] > ITEM){
            END = MID-1;
        }
        else{
            BEG = MID+1;
        }
        MID = (BEG + END)/2;
    }
    if(DATA[MID] == ITEM){
         LOC = MID;
    }else{
        LOC = 0;
    }
    cout<<"location is at"<<LOC;
}