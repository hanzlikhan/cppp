#include <iostream>
using namespace std;
int main(){
    int data[] = {23,54,13,98,67};
    int n = 5;
    int k = 1; int loc = 0; int max = data[0];
    while(k<=n){
        if (max < data[k])
        {
            max = data[k];
            loc = k;
        }
        k++;
    }
    cout<<"max is"<<max<<"at location "<<loc<<endl;
}