
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, sum = 0;
        int minLen = INT_MAX;  // ✅ initial value (very large)

        for (int right = 0; right < n; right++) {
            sum += nums[right];   // expand the window

            // shrink window while condition is satisfied
            while (sum >= target) {
                minLen = min(minLen, right - left + 1);
                sum -= nums[left];   // remove first element
                left++;
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;

    cout << s.minSubArrayLen(target, nums) << endl;  // ✅ Output: 2
    return 0;
}
