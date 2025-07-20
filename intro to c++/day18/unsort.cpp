#include <iostream>
#include <vector>
using namespace std;

// Function to find the first unsorted index in the array
int findFirstUnsortedIndex(const vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return i;
        }
    }

    return -1; // Already sorted
}

int main() {
    // Example 1: Unsorted
    vector<int> arr1 = {10, 20, 30, 25, 40};
    int index1 = findFirstUnsortedIndex(arr1);
    cout << "First unsorted index in arr1: " << index1 << endl;

    // Example 2: Sorted
    vector<int> arr2 = {1, 2, 3, 4, 5};
    int index2 = findFirstUnsortedIndex(arr2);
    cout << "First unsorted index in arr2: " << index2 << endl;

    return 0;
}
