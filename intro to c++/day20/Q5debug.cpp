#include <iostream>
using namespace std;

int pairSumToX(int input[], int size, int x) {
    int pairs = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(input[i] + input[j] == x) pairs++;
        }
    }
    return pairs;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;

    int result = pairSumToX(arr, n, x);

    cout << "Number of pairs that sum to " << x << " is: " << result << endl;

    return 0;
}
