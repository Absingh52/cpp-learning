#include <iostream>
#include <vector>
using namespace std;
// 449. Find the Pivot Index of a Rotated Array
class Solution {
public:
    int findPivotIndex(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        int e = n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (mid + 1 < n && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            else if (nums[mid] < nums[s]) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int pivot = sol.findPivotIndex(nums);
    if (pivot != -1) {
        cout << "Pivot index: " << pivot << endl;
    } else {
        cout << "No pivot found (array not rotated)." << endl;
    }
    return 0;
}
