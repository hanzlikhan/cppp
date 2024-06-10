#include <iostream>
using namespace std;
int partition(int arr[],int low , int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low;j<high;j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }
    i++;
    int temp = arr[i];
    arr[i] = pivot;
    arr[high] = temp;
}
void Quicksort(int arr[],int low,int high){
    if(low<high){
        int Pidx = partition(arr,low,Pidx-1);
        Quicksort(arr,low,Pidx-1);
        Quicksort(arr,Pidx+1,high);
    }
}
int main(){
    int arr[] = {6,3,9,5,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Quicksort(arr,0,n-1);
}