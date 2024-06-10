#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {23,55,12,74,29};
    for(int i = 0; i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = arr[j];
            }
    }
    swap(arr[i],arr[min]);
}
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
}
}