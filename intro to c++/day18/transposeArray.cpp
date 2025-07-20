#include <iostream>
#include <vector>
using namespace std;

// Function to transpose a matrix
vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
    int n = matrix.size();         // number of rows
    int m = matrix[0].size();      // number of columns

    // Create a new matrix of size m x n (swapped dimensions)
    vector<vector<int>> arr(m, vector<int>(n));

    // Transpose logic
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[j][i] = matrix[i][j];
        }
    }

    return arr;
}

int main() {
    // Sample matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<vector<int>> result = transpose(matrix);

    // Output the transposed matrix
    cout << "Transposed matrix:" << endl;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
