#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int median(vector<int> num1, vector<int> num2){
    int n = num1.size();
    int m = num2.size();
    int k = n+m;
    vector<int> num3;
    for(int i = 0;i<n;i++){
        num3.push_back(num1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        num3.push_back(num2[i]);
    }
    int n=num3.size();
    sort(num3.begin(),num3.end());
    int total = num3.size();
    if (total%2==1)
    {
        return static_cast<double> (num3[total/2]) ;
    }else
    {
        int mid1 = num3[total/2-1];
        int mid2 = num3[total/2];
        return (static_cast<double>(mid1) + static_cast<double> (mid2));
    }
}
int main(){
    vector<int> num1(5);
    for(int i = 0 ; i<5;i++){
            num1.push_back(num1[i]);
    }
    vector<int> num2(4);
    for(int i = 0 ; i<4;i++){
            num1.push_back(num2[i]);
    }
    cout<<median( num1,num2);
}