#include<iostream>
#include<vector>
using namespace std;
vector<int> multiplyByTen(const vector<int>& arr) {
    // Start completing the function
    vector<int>result=arr;
    for(int i=0;i<result.size();i++){
       result[i]=result[i]*10;
    }
      return result;
}

int main(){
    int n;
     cout<<"Enter the n:"<<endl;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
      vector<int> multiplied = multiplyByTen(arr);
    
    cout << "Elements multiplied by 10 are:" << endl;
    for(int i = 0; i < multiplied.size(); i++) {
        cout << multiplied[i] << " ";
    }
    cout << endl;
    return 0;

}