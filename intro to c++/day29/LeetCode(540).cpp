// (540)For the Single Element in a Sorted Array 
#include<iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int s = 0;
    int e = nums.size() - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;
        if ((mid & 1) == 1) {
            if (nums[mid] == nums[mid - 1]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        } else {
            if (nums[mid] == nums[mid + 1]) {
                s = mid + 2;
            } else {
                e = mid;
            }
        }
    }
    return nums[e];
}
int main(){
    vector<int>nums={1,1,2,2,3,4,4,5,5};
    int result=singleNonDuplicate(nums);
    cout<<"single element is :"<<result<<endl;

    return 0;
}