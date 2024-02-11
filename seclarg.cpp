// second largest elemnt in the array

// #include <iostream>
// using namespace std;
//     int large(int arr[],int size){
//         int max= arr[0];
//         int maxindex = -1;
//         for(int i=0;i<size;i++){
//             if(arr[i]>max){
//                 max = arr[i];
//                 maxindex = i;
//             }
//         }
//         return maxindex;
//     }
// int main(){
//     int arr[] = {6,2,3,4,5,6};
//     int index = large(arr,6);
//     arr[index] = -1;
//     int secondlarge =large(arr,6);
//     cout<<arr[secondlarge];
// }


//  find second largst element when first large repeated element
#include <iostream>
using namespace std;
int seclarg(int arr[],int size){
    int max = arr[0];
    int secmax = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i,size;i++){
        if(arr[i]>secmax && arr[i]!=max){
            secmax = arr[i];
        }
    }
    return secmax;
}
int main(){
    int arr[] ={7,2,3,5,6,7};
    cout<<seclarg(arr,6);
}