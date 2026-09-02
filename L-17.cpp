//binary search
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> nums, int tar){
    int st=0, end=nums.size()-1;
    int mid;
    while(st<=end){
        mid = st + ((end-st)/2);
        if(tar>nums[mid]){
            st=mid+1;
        }
        else if(tar<nums[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> nums={1,2,3,4,5};
    int tar=4;
    cout<<"target at index : "<<binarySearch(nums,tar);
    return 0;
}