#include <bits/stdc++.h>
using namespace std;

/*
------------------------------------------------------
Custom Comparator in C++:
------------------------------------------------------
A "custom comparator" is a function (or functor) we define to decide
how two elements should be ordered in sorting or searching algorithms.

Why use it?
1. Default sort is ascending. If you want descending, or sort based on
   custom logic (like sort by second value of pair), you need your own comparator.
2. Useful in interviews for questions like:
   - Sort array of strings by length.
   - Sort vector of pairs by second element (and if tie, by first element).
   - Priority queues with custom ordering.
3. Works with sort(), binary_search(), lower_bound(), etc.

Syntax options:
1. Lambda function
2. Separate function
3. Functor (struct with operator())

In binary search:
- Comparator tells the algorithm how to "navigate" in sorted data.
- If sort order changes, the binary search condition must match that order.

------------------------------------------------------
Example we'll cover:
1. Sort a vector of pairs<int,int> by:
   - First element ascending
   - If first element is same, then second element descending
2. Perform binary search on first element.
------------------------------------------------------
*/

// Custom comparator for sort
bool customSort(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) 
        return a.second > b.second; // Descending order if first is same
    return a.first < b.first;       // Ascending order by first
}

int main() {
    vector<pair<int, int>> v = {
        {2, 5}, {1, 9}, {2, 3}, {1, 2}, {3, 7}, {2, 8}
    };

    cout << "Before sorting:\n";
    for (auto &p : v) {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << "\n\n";

    // Sorting using custom comparator
    sort(v.begin(), v.end(), customSort);

    cout << "After sorting with custom comparator:\n";
    for (auto &p : v) {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << "\n\n";

    /*
    ------------------------------------------------------
    Binary search part:
    We'll search for a pair whose first = 2, ignoring second value.
    Since we sorted by custom comparator, we can use lower_bound
    with a matching comparator to find position.
    ------------------------------------------------------
    */

    pair<int, int> target = {2, INT_MAX}; // INT_MAX to get the highest 'second'
    auto it = lower_bound(v.begin(), v.end(), target, [](pair<int, int> a, pair<int, int> b) {
        // Same logic as sorting comparator but for lower_bound
        if (a.first == b.first) 
            return a.second > b.second;
        return a.first < b.first;
    });

    if (it != v.end() && it->first == 2) {
        cout << "Found element with first = 2: (" << it->first << "," << it->second << ")\n";
    } else {
        cout << "Element with first = 2 not found.\n";
    }

    return 0;
}
