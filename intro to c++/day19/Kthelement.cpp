#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// ✅ Optimized using Bucket Sort
vector<int> topKFrequentOptimized(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        freq[nums[i]] = freq[nums[i]] + 1;
    }

    vector<vector<int>> arr(n + 1);
    for (auto it = freq.begin(); it != freq.end(); it++) {
        int element = it->first;
        int frequency = it->second;
        arr[frequency].push_back(element);
    }

    vector<int> result;
    for (int i = n; i > 0 && result.size() < k; i--) {
        for (int j = 0; j < arr[i].size(); j++) {
            result.push_back(arr[i][j]);
            if (result.size() == k) {
                break;
            }
        }
    }
    return result;
}

// 🚫 Brute Force using nested loops
vector<int> topKFrequentBruteForce(vector<int>& nums, int k) {
    vector<pair<int, int>> freqList; // {element, frequency}
    vector<int> result;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int count = 0;
        bool alreadyCounted = false;

        for (int j = 0; j < freqList.size(); j++) {
            if (freqList[j].first == nums[i]) {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted) continue;

        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        freqList.push_back({nums[i], count});
    }

    sort(freqList.begin(), freqList.end(), [](pair<int, int>& a, pair<int, int>& b) {
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    });

    for (int i = 0; i < k && i < freqList.size(); i++) {
        result.push_back(freqList[i].first);
    }

    return result;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    cout << "Optimized (Bucket Sort) Top K Frequent: ";
    vector<int> res1 = topKFrequentOptimized(nums, k);
    for (int val : res1) cout << val << " ";
    cout << endl;

    cout << "Brute Force Top K Frequent: ";
    vector<int> res2 = topKFrequentBruteForce(nums, k);
    for (int val : res2) cout << val << " ";
    cout << endl;

    return 0;
}
