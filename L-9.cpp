//vector

// //find single number / unique number
// #include<iostream>
// #include<vector>
// using namespace std;

// int singleNumber(vector<int> nums){
//     int ans=0;
//     for(int val : nums){
//         ans=ans^val;  //XOR => n^n=0 , n^0=n
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums={1,2,3,3,2};
//     int result=singleNumber(nums);
//     cout<<"single number = "<<result;
//     return 0;
// }