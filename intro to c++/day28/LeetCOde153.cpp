#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == nums[e]) {
                e--;  // skip duplicate
            }
            else if (nums[mid] > nums[e]) {
                s = mid + 1;  // min is on the right
            }
            else {
                e = mid;  // min is at mid or left side
            }
        }
        return nums[s];
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sol.findMin(nums);
    cout << "Minimum element in rotated sorted array is: " << result << endl;

    return 0;
}
