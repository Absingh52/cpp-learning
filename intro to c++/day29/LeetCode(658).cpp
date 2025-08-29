// 658. Find K Closest Elements
#include<iostream>

#include<vector>
using namespace std;

vector<int> findCloset(vector<int>&arr,int k,int x){
     int n= arr.size();
     int s=0;
     int e=n-k;
        vector<int>nums;
     while(s<e){
        int mid=s+(e-s)/2;
        if(x-arr[mid]>arr[mid+k]-x){
            s=mid+1;
        }
        else{
            e=mid;
        }
     }
     for(int i=s;i<s+k;s++){
            nums.push_back(arr[i]);
     }
     return nums;
}

int main(){

    vector<int> arr= {1,2,3,4,5};
    int k=4;
    int x=3;
    vector<int> result=findCloset(arr,k,x);
    for(int i:result){
        cout<<i<<",";
    }
}