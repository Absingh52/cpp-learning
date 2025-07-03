#include<iostream>

#include<vector>

using namespace std;
int searchElementInArray(vector<int>& nums, int target) {
    // Implement the logic to search for an element in the array
    vector<int>arr=nums;
    int goal=target;
    for(int i=0;i<arr.size();i++){
       
        if(goal == arr[i]){
            return i;
        }
       
    }
    return -1;
     
}
int main(){
     int n;
     cout<<"Enter the n:"<<endl;
     cin>>n;
     int target;
     cout<<"enter number that you want to search:"<<endl;
     cin>>target;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
      int result = searchElementInArray(arr,target);
    
    cout << "Element that you want to search:" <<result<< endl;
    
    
    return 0;
}