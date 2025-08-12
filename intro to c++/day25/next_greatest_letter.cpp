#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s = 0;
        int e = letters.size() - 1;
        char ans = letters[0]; // Default to first letter for wrap-around

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (letters[mid] > target) {
                ans = letters[mid];  // Possible answer found
                e = mid - 1;         // Try to find a smaller one on the left
            } 
            else {
                s = mid + 1;         // Look to the right
            }
        }
        return ans;
    }
};

int main() {
    vector<char> letters;
    int n;
    char target;

    cout << "Enter number of letters: ";
    cin >> n;

    cout << "Enter " << n << " letters in sorted order: ";
    for (int i = 0; i < n; i++) {
        char ch;
        cin >> ch;
        letters.push_back(ch);
    }

    cout << "Enter target letter: ";
    cin >> target;

    Solution sol;
    char result = sol.nextGreatestLetter(letters, target);

    cout << "Smallest letter greater than target: " << result << endl;

    return 0;
}
