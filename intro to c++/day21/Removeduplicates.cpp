#include <iostream>
#include <vector>
using namespace std;

// Brute Force Method
int removeDuplicatesBrute(vector<int>& nums) {
    for (int i = nums.size() - 1; i > 0; i--) {
        if (nums[i] == nums[i - 1]) {
            nums.erase(nums.begin() + i);
        }
    }
    return nums.size();
}

// Optimized Method (Two-pointer)
int removeDuplicatesOptimized(vector<int>& nums) {
    if (nums.empty()) return 0;

    int index = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};

    // Make a copy for each method to avoid modification overlap
    vector<int> numsBrute = nums;
    vector<int> numsOptimized = nums;

    // Brute Force Result
    int newSizeBrute = removeDuplicatesBrute(numsBrute);
    cout << "After removing duplicates (Brute): ";
    for (int i = 0; i < newSizeBrute; i++) {
        cout << numsBrute[i] << " ";
    }
    cout << endl;

    // Optimized Result
    int newSizeOptimized = removeDuplicatesOptimized(numsOptimized);
    cout << "After removing duplicates (Optimized): ";
    for (int i = 0; i < newSizeOptimized; i++) {
        cout << numsOptimized[i] << " ";
    }
    cout << endl;

    return 0;
}
