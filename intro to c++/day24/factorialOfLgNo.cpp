#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> factorial(int N) {
        vector<int> result;
        result.push_back(1); // factorial starts at 1

        for (int x = 2; x <= N; x++) {
            int carry = 0;
            for (int i = 0; i < result.size(); i++) {
                int prod = result[i] * x + carry;
                result[i] = prod % 10;   // store single digit
                carry = prod / 10;       // update carry
            }

            while (carry) {
                result.push_back(carry % 10);
                carry /= 10;
            }
        }

        reverse(result.begin(), result.end()); // reverse to make most significant digit first
        return result;
    }
};

int main() {
    Solution sol;
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> fact = sol.factorial(N);
    for (int digit : fact) {
        cout << digit;
    }
    cout << endl;

    return 0;
}
// Time =O(n^2logn)
// Space=O(nlogn)