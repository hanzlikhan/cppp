#include <iostream>
#include <vector>
using namespace std;
int main(){
//    vector<int> v(5);
// //    for loop
// for(int i=0;i<5;i++){
//     int element;
// // cout<<"enter a number:";
// // cin>>element;
//     v.push_back(7);    
// }
// for(int i=0;i<v.size();i++){
// cout<<v[i]<<" ";
// }
// cout<<endl;
// for(int ele:v){
//    int element;
// cin>>element;
// }

//occurance of last x in array 
// vector<int> v={1,2,3,5,3,1,6,8,1};
// int occ = 0;
// for(int i=0;i<v.size();i++){
//    if(v[i]==1){
//       occ =i;
//    }
// }
// cout<<occ; 

// count the same element x in the array

vector<int> v(5);
for(int i=0;i<v.size();i++){
   cout<<"enter the values :";
   cin>>v[i];
}
int x;
cout<<"enter the x element :";
cin>>x;
int occ=0;
for(int ele:v){
   if(ele==x){
      occ++;
   }
}
cout<<occ<<endl;
}
// check if array is sorted or not 

// vector<int> v(5);
// for(int i=0;i<v.size();i++){
//    cout<<"enter the values :";
//    cin>>v[i];
// }
// int occ=1;
//    for(int i=1;i<v.size();i++){
//       if(v[i]>v[i]-1){
//          occ=0;
//       }else{
//          occ=1;
//       }
//    }
//    if(occ==0){
//       cout<<"array is sorted"<<endl;
//    }else{
//       cout<<"array is not sorted";
//    }
// }

