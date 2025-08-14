#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPivotIndex(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        int e = n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (s == e) {
                return mid;
            }
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

    int binarySearch(vector<int>& nums, int target, int s, int e) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivotIndex(nums);
        int n = nums.size();

        if (target >= nums[0] && target <= nums[pivotIndex]) {
            return binarySearch(nums, target, 0, pivotIndex);
        }
        else {
            return binarySearch(nums, target, pivotIndex + 1, n - 1);
        }
    }
}; 
int main() {
    Solution sol;

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = sol.search(nums, target);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << endl;
    }
    else {
        cout << "Target not found." << endl;
    }

    return 0;
}
