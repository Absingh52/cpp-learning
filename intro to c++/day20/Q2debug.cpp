#include <iostream>
#include<vector>
using namespace std;

int linearSearch(int arr[], int n, int val) {
    for(int i = 0; i < n ; i++) {
        if(arr[i] == val) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n =sizeof(arr) / sizeof(arr[0]);
    int val = 20;

    int result=linearSearch(arr, n, val);

    cout << "Search completed = "<<result << endl;
    
    return 0;
}
