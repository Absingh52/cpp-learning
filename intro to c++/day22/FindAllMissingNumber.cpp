#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

// Approach 1: Using unordered_set (O(n) space)
vector<int> findDisappearedNumbersWithSet(const vector<int>& nums) {
    int n = nums.size();
    unordered_set<int> seen;
    vector<int> missing;

    // Insert all present elements into the set
    for (int num : nums) {
        seen.insert(num);
    }

    // Check from 1 to n which numbers are missing
    for (int i = 1; i <= n; i++) {
        if (seen.count(i) == 0) {
            missing.push_back(i);
        }
    }

    return missing;
}

// Approach 2: In-place marking (O(1) extra space)
vector<int> findDisappearedNumbersInPlace(vector<int> nums) {
    int n = nums.size();
    vector<int> result;

    // Mark the visited numbers by making their corresponding index negative
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }

    // All positive indices +1 are missing numbers
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            result.push_back(i + 1);
        }
    }

    return result;
}

// Main function to test both approaches
int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    // Approach 1
    vector<int> missingSet = findDisappearedNumbersWithSet(nums);
    cout << "Missing numbers using unordered_set (O(n) space): ";
    for (int x : missingSet) cout << x << " ";
    cout << endl;

    // Approach 2
    vector<int> missingInPlace = findDisappearedNumbersInPlace(nums);
    cout << "Missing numbers using in-place method (O(1) space): ";
    for (int x : missingInPlace) cout << x << " ";
    cout << endl;

    return 0;
}
