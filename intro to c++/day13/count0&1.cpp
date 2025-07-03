#include <iostream>
#include <vector>
using namespace std;

pair<int, int> countZerosAndOnes(const vector<int>& nums) {
    int zeros = 0;
    int ones = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0){
            zeros++;
        } else {
            ones++;
        }
    }
    return make_pair(zeros, ones);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " binary elements (0 or 1):" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int,int> result = countZerosAndOnes(arr);

    cout << "Number of zeros: " << result.first << endl;
    cout << "Number of ones: " << result.second << endl;

    return 0;
}
