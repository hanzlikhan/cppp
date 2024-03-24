#include <iostream>
#include <vector>
using namespace std;
int maximum(vector<int>& height){
    
    int left = 0;
    int right = height.size()-1;
    int maxArea = 0;
    while (left<right)
    {
        int currArea = min(height[left],height[right])*(right-left);
        maxArea = max(currArea,maxArea);
        if (height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxArea;
    

}
int main(){

    vector<int> height = {2,6,4,2,3,6};
    cout<<maximum(height);
}