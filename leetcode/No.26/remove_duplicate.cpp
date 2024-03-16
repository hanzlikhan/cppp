#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0; // If the array is empty, return 0

    int j = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {
    // Example usage:
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    
    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int newLength = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Length of the array after removal: " << newLength << endl;

    return 0;
}
