// #include <iostream>
// using namespace std;
// int pow(int p,int q){
//     if(q==0){
//         return 1;
//     }
//     // return p* pow(p,q-1);
//     // this method is extremely eficient than above program
//     if(q%2==0){
//         // if q is even
//         int result = pow(p,q/2);
//         return result*result;
//     }
//     else{
//         // if q is odd
//         int result = pow(p,(q-1)/2);
//         return p*result *result;    }
// }
// int main(){
// cout<<pow(4,5);   // time complexity O(q)
// }



#include <iostream>
using namespace std;
int pow(int p,int q){
    if(q==0){
        return 1;
    }
    return p*pow(p,q-1);
}
int main(){
    cout<<pow(2,3);
}