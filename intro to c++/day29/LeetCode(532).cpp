// 532. K-diff Pairs in an Array
#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

int findPairs(vector<int>&arr,int k){
        int n =arr.size();
        int count=0;
        unordered_map<int,int> nums;
        for(int i:arr){
            nums[i]++;
        }

        for(auto &i:nums){
            int x=i.first;

            if(nums.find(x+k)!=nums.end()){
                count++;
            }
            else if(k==0){
                if(p.second>1){
                    count++;
                }
            }
        }
        return count;
}

int main(){

    vector<int> arr= {3,1,4,1,5};
    int k=2;
    int result=findPairs(arr,k);
    cout<<result;
}