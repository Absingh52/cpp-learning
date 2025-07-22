#include <iostream>
using namespace std;

void populate(int arr[], int n) {
    int j = 0;
    for(int i = 0; i < n; i = i + 2) {
        arr[n - j] = i + 2;
        arr[j] = i + 1;
        j++;
    }
}

int main() {
    int n = 10;
    int arr[20] = {0};  // initialize with enough size and zeros

    populate(arr, n);

    cout << "Populated array: ";
    for(int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
