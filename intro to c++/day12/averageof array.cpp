#include<iostream>
#include<vector>
using namespace std;
 double findAverage(const vector<int>& arr) {
        // Implement logic to find the average
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
        }
        double average=static_cast<double>(sum)/arr.size();
        return average;

    }
int main(){
     int n;
     cout<<"Enter the n:"<<endl;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    double avg = findAverage(arr);
    cout << "Average is: " << avg << endl;
    return 0;
}