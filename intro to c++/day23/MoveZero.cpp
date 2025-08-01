#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to move all 0's to the end while maintaining the order of non-zero elements
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int position = 0;

    // Move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the rest with zeroes
    for (int i = position; i < n; i++) {
        nums[i] = 0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    moveZeroes(nums);

    cout << "After moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
