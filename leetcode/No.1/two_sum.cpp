#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; // No solution found
}

int main() {
    vector<int> nums = {2, 7, 11, 15}; // Sample input array
    int target = 9; // Sample target

    vector<int> result = twoSum(nums, target);

    if (result.size() == 2) {
        cout << "Indices of the two numbers: " << result[0] << ", " << result[1] << endl;
        cout << "The numbers are: " << nums[result[0]] << ", " << nums[result[1]] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
