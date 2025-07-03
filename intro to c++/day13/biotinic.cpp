#include<iostream>
#include<vector>

using namespace std;
int findPeakElement(vector<int>&arr){
    vector<int>num=arr;
    int low=0;
    int high=(arr.size()-1);

    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else{
            high=mid;
        }
        
    }
    return arr[low];
    
}


int main(){
    int n;
    cout<<"enter the size of the vector"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the elements for an array at "<<i<<"is"<<endl;
        cin>>arr[i];
    }
    int Peak=findPeakElement(arr);
    cout<<"Peak element is :"<<Peak<<endl;
}