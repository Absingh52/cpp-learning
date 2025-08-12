#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int firstOccurrence(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;
                e = mid - 1; // keep searching left
            }
            else if (nums[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return ans;
    }

    int lastOccurrence(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;
                s = mid + 1; // keep searching right
            }
            else if (nums[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurrence(nums, target);
        int last = lastOccurrence(nums, target);
        return {first, last};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> result = sol.searchRange(nums, target);

    cout << "First occurrence: " << result[0] << endl;
    cout << "Last occurrence: " << result[1] << endl;

    return 0;
}
