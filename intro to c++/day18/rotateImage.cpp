#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate the matrix 90 degrees clockwise
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();    // square matrix (n x n)

    // Step 1: Reverse rows (flip top to bottom)
    reverse(matrix.begin(), matrix.end());

    // Step 2: Transpose the matrix (swap across diagonal)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

// Helper function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Sample 3x3 square matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    rotate(matrix);

    cout << "\nRotated Matrix (90 degrees clockwise):\n";
    printMatrix(matrix);

    return 0;
}
