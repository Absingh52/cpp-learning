#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findFirstRepeatingElement(vector<int>& arr) {
    unordered_map<int, int> num;
    for (int i = 0; i < arr.size(); i++) {
        num[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++) {
        if (num[arr[i]] > 1) {
            return arr[i];
        }
    }
    return -1; // No repeating element found
}

int main() {
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};
    int result = findFirstRepeatingElement(arr);
    if (result != -1)
        cout << "First repeating element is: " << result << endl;
    else
        cout << "No repeating element found." << endl;

    return 0;
}
