#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Brute-force version
vector<int> twoSumBruteForce(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

// Optimized version using Hashing
vector<int> twoSumOptimized(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.count(complement)) {
            return {mp[complement], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    // You can switch between brute-force and optimized
    vector<int> result = twoSumOptimized(nums, target);
    // vector<int> result = twoSumBruteForce(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
