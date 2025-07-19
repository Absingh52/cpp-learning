#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to print extreme elements alternately (min, max, 2nd min, 2nd max, ...)
vector<int> printExtremeElementsAlternately(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<int> temp(n);
    int i = 0;
    int j = n - 1;
    int k = 0;

    while (i <= j) {
        if (i == j) {
            temp[k++] = arr[i];
        } else {
            temp[k++] = arr[i];
            temp[k++] = arr[j];
        }
        i++;
        j--;
    }

    // Copy result back to original array (optional)
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    return arr;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};

    vector<int> result = printExtremeElementsAlternately(arr);

    cout << "Extreme elements alternately: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
