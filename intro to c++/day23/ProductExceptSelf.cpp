#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    int left = 1, right = 1;
    vector<int> ans(n, 1);

    // Left pass
    for (int i = 0; i < n; i++) {
        ans[i] *= left;
        left *= nums[i];
    }

    // Right pass
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= right;
        right *= nums[i];
    }

    return ans;
}

// Optional: for testing the function
int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
