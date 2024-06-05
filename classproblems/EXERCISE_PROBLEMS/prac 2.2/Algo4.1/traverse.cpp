#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int lb = 0;
    int ub = n;
    while(lb<ub){
        cout<<arr[lb]<<endl;
        lb++;
    }
    return 0;
}