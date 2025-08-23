#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] > nums[e]) {
                // Minimum is in the right half
                s = mid + 1;
            } else {
                // Minimum is in the left half (including mid)
                e = mid;
            }
        }
        return nums[s]; // both s and e will point to the minimum
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    cout << "Minimum: " << sol.findMin(nums1) << endl;

    vector<int> nums2 = {11, 13, 15, 17};
    cout << "Minimum: " << sol.findMin(nums2) << endl;

    vector<int> nums3 = {3, 4, 5, 1, 2};
    cout << "Minimum: " << sol.findMin(nums3) << endl;

    return 0;
}
