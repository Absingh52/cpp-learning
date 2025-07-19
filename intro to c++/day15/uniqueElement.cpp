#include <iostream>
#include <vector>
using namespace std;

// Function to find the unique element
int findUniqueElement(vector<int>& nums) {
    int ans = 0;
    for(int i = 0; i < nums.size(); i++) {
        ans = ans ^ nums[i];
    }
    return ans;
}

int main() {
    // Sample input
    vector<int> nums = {1, 2, 3, 2, 1};

    // Function call
    int unique = findUniqueElement(nums);

    // Output the result
    cout << "The unique element is: " << unique << endl;

    return 0;
}
