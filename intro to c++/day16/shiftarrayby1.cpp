#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute force version: Manual shifting
vector<int> shiftRightBruteForce(const vector<int>& arr) {
    vector<int> num = arr;
    int n = num.size();
    int temp;

    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            temp = num[i];
        }
        num[i] = (i == 0) ? temp : num[i - 1];
    }

    return num;
}

// Optimized version: Using reverse
vector<int> shiftRightOptimized(const vector<int>& arr) {
    vector<int> num = arr;
    reverse(num.begin(), num.end());
    reverse(num.begin() + 1, num.end());
    return num;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    // Call brute force
    vector<int> result1 = shiftRightBruteForce(arr);
    cout << "Brute Force Result: ";
    for (int val : result1) cout << val << " ";
    cout << endl;

    // Call optimized
    vector<int> result2 = shiftRightOptimized(arr);
    cout << "Optimized Result: ";
    for (int val : result2) cout << val << " ";
    cout << endl;

    return 0;
}
