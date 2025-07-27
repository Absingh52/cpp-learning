#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expected = n * (n + 1) / 2;  // use int instead of double
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int missing = expected - sum;
    return missing;
}

int main() {
    vector<int> nums = {3, 0, 1};  // Example input: missing number is 2
    int result = missingNumber(nums);
    cout << "Missing Number: " << result << endl;
    return 0;
}
