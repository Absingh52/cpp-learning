// 448. Find Peak Index in a Mountain Array
#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int s = 0, e = n - 1, ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (mid + 1 < n && arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            ans = mid;
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 6, 4, 2};
    cout << "Peak index: " << peakIndexInMountainArray(arr) << endl;
    return 0;
}
