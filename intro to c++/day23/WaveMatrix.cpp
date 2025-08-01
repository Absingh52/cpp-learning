#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrintMatrix(vector<vector<int>>& matrix, int m, int n) {
    vector<int> arr;
    for (int j = 0; j < n; j++) {
        if (j % 2 != 0) {
            // Print bottom to top
            for (int i = m - 1; i >= 0; i--) {
                arr.push_back(matrix[i][j]);
            }
        } else {
            // Print top to bottom
            for (int i = 0; i < m; i++) {
                arr.push_back(matrix[i][j]);
            }
        }
    }
    return arr;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int m = 3; // rows
    int n = 3; // columns

    vector<int> result = wavePrintMatrix(matrix, m, n);

    cout << "Wave Print: ";
    for (int val : result)
