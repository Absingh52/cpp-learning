#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Detect the cycle
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];              // move 1 step
            fast = nums[nums[fast]];        // move 2 steps
        } while (slow != fast);

        // Phase 2: Find the entrance to the cycle (duplicate)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow; // Duplicate number
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 4, 2, 2}; // Example test case
    int duplicate = sol.findDuplicate(nums);
    cout << "Duplicate number: " << duplicate << endl;
    return 0;
}
