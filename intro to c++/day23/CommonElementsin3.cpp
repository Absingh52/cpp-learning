#include <iostream>
#include <vector>
using namespace std;

vector<int> commonElements(vector<int>& array1, vector<int>& array2, vector<int>& array3) {
    int n = array1.size();
    int m = array2.size();
    int l = array3.size();
    
    vector<int> arr;
    int i = 0, j = 0, k = 0;

    while (i < n && j < m && k < l) {
        if (array1[i] == array2[j] && array2[j] == array3[k]) {
            if (arr.empty() || arr.back() != array1[i]) {
                arr.push_back(array1[i]);
            }
            i++; j++; k++;
        } 
        else if (array1[i] < array2[j]) {
            i++;
        } 
        else if (array2[j] < array3[k]) {
            j++;
        } 
        else {
            k++;
        }
    }
    
    return arr;
}

// Sample main function to test
int main() {
    vector<int> A = {1, 5, 10, 20, 20, 40, 80};
    vector<int> B = {6, 7, 20, 20, 80, 100};
    vector<int> C = {3, 4, 15, 20, 20, 30, 70, 80, 120};

    vector<int> result = commonElements(A, B, C);

    cout << "Common elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
