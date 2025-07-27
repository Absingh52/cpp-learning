#include <iostream>
#include <vector>
using namespace std;

// Brute Force Method
int pivotIndexBrute(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int left = 0;
        for (int k = 0; k < i; k++) {
            left += nums[k];
        }

        int right = 0;
        for (int j = n - 1; j > i; j--) {
            right += nums[j];
        }

        if (left == right) {
            return i;
        }
    }
    return -1;
}

// Optimized Method (Prefix Sum Style)
int pivotIndexOptimized(vector<int>& nums) {
    int totalSum = 0, left = 0;
    for (int num : nums) {
        totalSum += num;
    }

    for (int i = 0; i < nums.size(); i++) {
        int right = totalSum - left - nums[i];
        if (left == right) return i;
        left += nums[i];
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    // Choose which method to run
    cout << "Choose Method: 1 for Brute Force, 2 for Optimized: ";
    int choice;
    cin >> choice;

    int result;
    if (choice == 1) {
        result = pivotIndexBrute(nums);
    } else {
        result = pivotIndexOptimized(nums);
    }

    cout << "Pivot Index: " << result << endl;

    return 0;
}
