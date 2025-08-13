// 450. Find Square Root using Binary Search
#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int s = 0, e = x, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long result = 1LL * mid * mid;
            if (result == x) {
                return mid;
            }
            if (result > x) {
                e = mid - 1;
            } else {
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Square root (integer part): " << sol.mySqrt(x) << endl;
    return 0;
}
