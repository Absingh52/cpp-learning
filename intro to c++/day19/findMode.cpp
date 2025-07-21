#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int findMode(const vector<int>& arr) {
    unordered_map<int, int> freq;

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]] = freq[arr[i]] + 1;
    }

    int maxFreq = 0;
    int mode = INT_MAX;

    for (auto it = freq.begin(); it != freq.end(); it++) {
        int element = it->first;
        int count = it->second;

        if (count > maxFreq) {
            mode = element;
            maxFreq = count;
        } else if (count == maxFreq && element < mode) {
            mode = element;
        }
    }

    return mode;
}

int main() {
    vector<int> arr = {1, 3, 2, 3, 1, 3, 2, 2};
    cout << "Mode: " << findMode(arr) << endl;
    return 0;
}
