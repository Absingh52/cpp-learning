#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"enter the value of n";
    cin >> n;
    cout<<endl;
    int input[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements in array at index "<<i<<" :";
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}