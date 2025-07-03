#include<iostream>
#include<vector>
using namespace std;
  int findMaximum(vector<int>& arr) {
        // Your code here
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
          
            if(arr[i]>max ){
                max=arr[i];
            }
            
             
            
        }
        return max;
    }
int main(){
     int n;
     cout<<"Enter the n:"<<endl;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    int result=findMaximum(arr);
    cout << "Max Number is: " << result << endl;
    return 0;
}