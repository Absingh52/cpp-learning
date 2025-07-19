#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of both diagonals in a square matrix
int diagonalSum(vector<vector<int>>& mat) {
    int sum = 0;
    int n = mat.size();

    // Primary diagonal
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
    }

    // Secondary diagonal
    for (int i = 0; i < n; i++) {
        sum += mat[i][n - i - 1];
    }

    // If the matrix has odd dimensions, subtract the center element (counted twice)
    if (n & 1) {
        sum -= mat[n / 2][n / 2];
    }

    return sum;
}

int main() {
    // Sample 3x3 matrix
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Function call and output
    int result = diagonalSum(mat);
    cout << "Diagonal sum is: " << result << endl;

    return 0;
}
