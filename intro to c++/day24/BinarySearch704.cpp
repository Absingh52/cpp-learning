#include <iostream>
#include <vector>
using namespace std;

// Binary search function
int binarySearch(const vector<int>& arr, int target) {
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2; // To avoid potential overflow
        if (arr[mid] == target) {
            return mid; // Target found
        }
        else if (arr[mid] < target) {
            s = mid + 1; // Search in the right half
        }
        else {
            e = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main() {
    // Example array (must be sorted for binary search to work)
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    }
    else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
