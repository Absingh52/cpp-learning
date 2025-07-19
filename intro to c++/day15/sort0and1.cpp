#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to sort an array of 0s and 1s
vector<int> sortArray(vector<int>& nums) {
    vector<int> arr = nums;
    int zeros = 0;
    int ones = 0;

    // Count zeros and ones
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            zeros++;
        } else {
            ones++;
        }
    }

    // Fill zeros and ones in order
    fill(arr.begin(), arr.begin() + zeros, 0);
    fill(arr.begin() + zeros, arr.end(), 1);

    return arr;
}

int main() {
    // Sample input
    vector<int> nums = {1, 0, 1, 0, 1, 0};

    // Function call
    vector<int> sorted = sortArray(nums);

    // Print the sorted result
    cout << "Sorted array: ";
    for (int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << " ";
    }
    cout << endl;

    return 0;
}
