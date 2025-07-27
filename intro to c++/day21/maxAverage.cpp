#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    // Brute Force Approach - O(n*k)
    double findMaxAverageBrute(vector<int>& nums, int k) {
        double maxAvg = -1e9;
        for (int i = 0; i <= nums.size() - k; i++) {
            double sum = 0;
            for (int j = i; j < i + k; j++) {
                sum += nums[j];
            }
            maxAvg = max(maxAvg, sum / k);
        }
        return maxAvg;
    }

    // Optimized Approach - Sliding Window - O(n)
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxSum = sum;
        int startIndex = 0;
        int endIndex = k;

        while (endIndex < nums.size()) {
            sum -= nums[startIndex++];
            sum += nums[endIndex++];
            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};

// Optional main to test
int main() {
    Solution sol;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    cout << "Brute Force Result: " << sol.findMaxAverageBrute(nums, k) << endl;
    cout << "Optimized Result: " << sol.findMaxAverage(nums, k) << endl;

    return 0;
}
