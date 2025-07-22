#include<iostream>

using namespace std;


void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main()

{

    int size =5;
    int arr[5] = {1,2,3,4,5};  // initialize with enough size and zeros

    swapAlternate(arr,size);

    cout << "Swap array: ";
    for(int i = 0; i <size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;





}