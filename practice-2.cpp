// //sum of number from 1 to N.
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int n=5;
//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }
//     cout<<"sum="<<sum;
//     return 0;
// }

//sum of all odd number from 1 to N.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     int sum=0; 
//     for( int i=1; i<=n; i++){
//         if(i%2!=0){
//             sum+=i;
//         }
//     }
//     cout<<"sum="<<sum;
// }

//check if a number is prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int n=11;
//     bool isPrime = true;
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){
//             isPrime = false;
//         }
//     }
//     if(isPrime==true){
//         cout<<n<<" is prime no."<<endl;
//     }
//     else{
//         cout<<n<<" is not prime no."<<endl;
//     }
//     return 0;
// }

// // * * * * * 
// // * * * * *
// // * * * * *
// // * * * * *
// // * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//sum of all numbers from 1 to N which are divisible by 3.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=9; 
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         if(i%3==0){
//             sum+=i;
//         }
//     }
//     cout<<"sum="<<sum;
//     return 0;
// }

//print factorial of a number N.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     cout<<"fact="<<fact;
//     return 0;
// }

// * 
// * *
// * * *
// * * * *
// * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// // 1
// // 12
// // 123
// // 1234
// // 12345
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         int num = 1;
//         for(int j=0; j<i+1; j++){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
// }

// // 1
// // 22
// // 333
// // 4444
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
// }

// // * * * * * 
// // * * * *
// // * * *
// // * *
// // *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=n-i; j>0; j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // 12345
// // 1234
// // 123
// // 12
// // 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         int num=1;
//         for(int j=n-i; j>0;j--){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
// }


// //     *
// //    ***
// //   *****
// //  *******
// // *********
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n;i++){
//         for(int j=n-i-1; j>0; j--){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1;j++){
//             cout<<"*";
//         }
//         for(int j=1; j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // *********
// //  *******
// //   *****
// //    ***
// //     *
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=n-i; j>0; j--){
//             cout<<"*";
//         }
//         for(int j=n-i-1; j>0; j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
//  }


// // *
// // **
// // ***
// // ****
// // *****
// // ****
// // ***
// // **
// // *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n;i++){
//         for(int j=n-i-1; j>0; j--){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // 1
// // 01
// // 101
// // 0101
// // 10101
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int num=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<i+1; j++){
//             if((i+j)%2==0){
//                 cout<<1;
//             }
//             else{
//                 cout<<0;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // 1      1
// // 12    21
// // 123  321
// // 12344321
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=1; j<=i+1; j++){
//             cout<<j;
//         }
//         for(int j=(n-i-1)*2; j>0; j--){
//             cout<<" ";
//         }
//         for(int j=i+1; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// // 1 
// // 2 3
// // 4 5 6
// // 7 8 9 10
// // 11 12 13 14 15
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int num=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // *        *
// // **      **
// // ***    ***
// // ****  ****
// // **********
// // ****  ****
// // ***    ***
// // **      **
// // *        *
// #include<iostream>
// using namespace std;
// int main (){
//     int n=5; 
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         for(int j=(n-i-1)*2; j>0; j--){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1; i<n; i++){
//         for(int j=(n-i); j>0; j--){
//             cout<<"*";
//         }
//         for(int j=0; j<i*2; j++){
//             cout<<" ";
//         }
//         for(int j=(n-i); j>0; j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


////calculate nCr binomial coefficient for nCr.
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int fact = 1; 
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int fact_n = fact(n);
//     int fact_r = fact(r);
//     int fact_nr = fact(n-r);
//     return fact_n/(fact_r*fact_nr);
// }

// int main(){
//     int n = 6;
//     int r = 2;
//     cout<<"nCr= "<<nCr(n,r);
//     return 0;
// }

// //WAF to print a number is prime or not.
// #include<iostream>
// using namespace std;
// int isPrime(int n){
//     bool isPrime = true;
//     for(int i=2; i<=n-1; i++){
//         if(n%i == 0){
//             isPrime = false;
//         }
//     }
//     return isPrime;
// }

// int main(){
//     int n=5;
//     if(isPrime(n) == true){
//         cout<<"Prime number";
//     }
//     else{
//         cout<<"not a prime number";
//     }
//     return 0;
// }

// //WAF to print all prime numbers from 2 to N.
// #include<iostream>
// using namespace std;
// void printPrime(int n){
//     for(int i=2; i<=n; i++){
//         bool isPrime = true;
//         for(int j=2; j<i; j++){
//             if(i%j == 0){
//                 isPrime = false;
//             }
//         }
//         if(isPrime){
//             cout<<i<<" is prime no.\n";
//         }
//     }
// }
// int main(){
//     int n=9;
//     printPrime(n);
//     return 0;
// }

////WAF to print nth fabonaaci series.
// #include<iostream>
// using namespace std;
// void fabonacci(int n){
//     int a=0, b=1;
//     cout<<a<<" ";
//     for(int i=0; i<n-1; i++){
//         int c=a+b;
//         a=b;
//         b=a;
//         b=c;
//         cout<<a<<" ";
//     }
// }

// int main(){
//     int n=7;
//     fabonacci(n);
//     return 0;
// }

// //WAF to convert decimal to binary.
// #include<iostream>
// using namespace std;
// int DecToBin(int n){
//     int ans=0,pow=1;
//     while(n>0){
//         int rem = n%2;
//         ans+=(rem*pow);
//         n=n/2;
//         pow*=10;
//     }
//     return ans;
// }

// int main(){
//     int n=10;
//     cout<<n<<" binary form is: "<<DecToBin(n)<<endl;
//     return 0;
// }

////WAF to convert binary to decimal.
// #include<iostream>
// using namespace std;
// int BinToDec(int n){
//     int ans=0,pow=1;
//     while(n>0){
//         int rem=n%10;
//         ans+=(rem*pow);
//         n/=10;
//         pow*=2;
//     }
//     return ans;
// }

// int main(){
//     int n=1010;
//     cout<<n<<" Decimal digit is : "<<BinToDec(n)<<endl;
//     return 0;
// }

// //figure out how to find if a number is power of 2 with any loop.
// #include<iostream>
// using namespace std;
// int powOfTwo(int n){
//     int pow=1;
//     bool isPower = false;
//     while(pow<=n){
//         if(pow==n){
//             isPower = true;
//             break;
//         }
//         pow*=2;
//     }
//     return isPower;
// }

// int main(){
//     int n=11;
//     if(powOfTwo(n) == true){
//         cout<<n<<" is power of 2"<<endl;
//     }
//     else{
//         cout<<n<<" is not power of 2"<<endl;
//     }
//     return 0;
// }

////figure out how to find if a number is power of 2 without any loop.
// #include<iostream>
// using namespace std;
// int isPowOfTwo(int n){
//     if(n<=0){
//         return false;
//     }
//     return (n & (n-1)) == 0;
// }

// int main(){
//     int n=9;
//     if(isPowOfTwo(n)){
//         cout<<n<<" pow of 2";
//     }
//     else{
//         cout<<n<<" not pow of 2";
//     }
//     return 0;
// }

// //WAF to reverse an integer n.
// #include<iostream>
// using namespace std;
// int reverseANumber(int n){
//     int rev=0;
//     while(n>0){
//         int rem=n%10;
//         rev=(rev*10)+rem;
//         n=n/10;
//     }
//     return rev;
// }
// int main(){
//     int n=125;
//     cout<<"reverse = "<<reverseANumber(n);
//     return 0;
// }

// //find smallest/largest in array.
// #include<iostream>
// #include <climits>
// using namespace std;
// void smallestAndLargestNum(int arr[],int n){
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     for(int i=0; i<n; i++){
//         smallest=min(arr[i],smallest);
//         largest=max(arr[i],largest);
//     }
//     cout<<"smallest in array is :"<<smallest<<endl;
//     cout<<"largest in array is :"<<largest<<endl;
// }

// int main(){
//     int n=5;
//     int arr[n]={6,5,2,7,9};
//     smallestAndLargestNum(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int linearSearch(int arr[],int n, int target){
//     for(int i=0; i<n; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n=5;
//     int arr[n] = {1,2,3,4,5};
//     int target=5;
//     int result = linearSearch(arr,n,target);
//     if(result == -1){
//         cout<<"target is not found in array";
//     }else{
//     cout<<target<<" is at index "<<result<<" in array.";
//     }
//     return 0;
// }

// //WAF to reverse an array.using 2 pointer approach.
// #include<iostream>
// using namespace std;
// void reverseArr(int arr[],int n){
//     int i=0, j=n-1;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }

// int main(){
//     int n=5;
//     int arr[n]= {1,2,3,4,5};
//     reverseArr(arr,n);
//     cout<<"Reverse of array : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//  //WAF to calculate suma and product of an array.
//  #include<iostream>
//  using namespace std;
//  void sumAndProductOfArray(int arr[], int n){
//     int sum=0,prod=1;
//     for(int i=0; i<n;i++){
//         sum+=arr[i];
//         prod*=arr[i];
//     }
//     cout<<"sum of array : "<<sum<<endl;
//     cout<<"product of array : "<<prod<<endl;
//  }

//  int main(){
//     int n=5;
//     int arr[n]={1,2,3,4,5};
//     sumAndProductOfArray(arr,n);
//     return 0;
//  }


// //WAF to to swap the max and min number of an array.
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void swapMaxAndMin(int arr[],int n){
//     int minIdx=0;
//     int maxIdx=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]<arr[minIdx]){
//             minIdx = i;
//         }
//         if(arr[i]>arr[maxIdx]){
//             maxIdx = i;
//         }
//     }
//     swap(arr[minIdx],arr[maxIdx]);
// }

// int main(){
//     int n=5; 
//     int arr[n]={1,2,3,4,5};
//     swapMaxAndMin(arr,n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

// //WAF to print all the unique values in an array.using nested loop.
// #include<iostream>
// using namespace std;
// void uniqueNumber(int arr[],int n){
//     for(int i=0; i<n; i++){
//         int count=0;
//         for(int j=0; j<n; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count == 1){
//            cout<<arr[i]<<" ";
//         }
//     }
//     cout<<"is unique values in array.";
// }

// int main(){
//     int n=6;
//     int arr[n] ={1,2,3,2,1,4};
//     uniqueNumber(arr,n);
//     return 0;
// }

// //WAF to print intersection of 2 array.
// #include<iostream>
// using namespace std;
// void intersectionOfTwoArr(int arr1[],int arr2[],int n1,int n2){
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n2; j++){
//             if(arr1[i] == arr2[j]){
//                 cout<<arr1[i]<<" ";
//             }
//         }
//     }
//     cout<<"is intersection between two arrays.";
// }

// int main(){
//     int n1=4;
//     int n2=4;
//     int arr1[n1]={1,2,3,4};
//     int arr2[n2]={3,4,5,6};
//     intersectionOfTwoArr(arr1,arr2,n1,n2);
//     return 0;
// }

// //WAF to print single number using vector.
// #include<iostream>
// #include<vector>
// using namespace std;

// int SingleNumber(vector<int> nums){
//     int ans=0;
//     for(int i=0;i<nums.size();i++){
//         ans^=nums[i];
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums={1,2,1,2,3};
//     cout<<SingleNumber(nums);
//     return 0;
// }

// //WAF to print subarray .use Brute Force .
// #include<iostream>
// #include<vector>
// using namespace std;
// void subarr(vector<int> nums){
//     for(int st=0; st<nums.size(); st++){
//         for(int end=st; end<nums.size(); end++){
//             for(int i=st; i<=end; i++){
//                 cout<<nums[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     vector<int> nums={1,2,3,4,5};
//     subarr(nums);
//     return 0;    
// }

// //WAF to print maximum subarray sum.using brute force approach.
// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;
// int maxSubArray(vector<int> nums){
//     int maxSum=INT_MIN;
//     for(int i=0; i<nums.size(); i++){
//         int currSum=0;
//         for(int j=i; j<nums.size(); j++){
//             currSum+=nums[j];
//             maxSum=max(currSum,maxSum);
//         }
//     }
//     return maxSum;
// }

// int main(){
//     vector<int> nums={3,-4,5,4,-1,7,-8};
//     cout<<maxSubArray(nums);
//     return 0;
// }

// //WAF to print maximum subarray sum.using  kadene's algorithm most optimized approach.
// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;
// void maximumSubarrSum(vector<int> nums){
//     int currSum=0, maxSum=INT_MIN;
//     for(int i=0; i<nums.size(); i++){
//         currSum+=nums[i];
//         maxSum=max(currSum,maxSum);
//         if(currSum<0){
//             currSum=0;
//         }
//     }
//     cout<<maxSum;
// }

// int main(){
//     vector<int> nums={3,-4,5,4,-1,7,-8};
//     maximumSubarrSum(nums);
//     return 0;
// }

// //WAF to calculate pairsum using Brute force approach.at given target,in sorted array.
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairSum(vector<int> nums, int target){
//     vector<int> ans;
//     for(int i=0; i<nums.size(); i++){
//         for(int j=i+1; j<nums.size(); j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums={2,7,11,15};
//     int target = 9;
//     vector<int> ans = pairSum(nums,target);
//     cout<<ans[0]<<" "<<ans[1];
//     return 0;
// }

// //WAF to calculate pairsum using optimized approach at given target in sorted array.
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairSum(vector<int> nums, int tar){
//     vector<int> ans;
//     int st=0,end=nums.size()-1;
//     while(st<end){
//         int pairSum = nums[st] + nums[end];
//         if(pairSum < tar){
//             st++;
//         }
//         else if(pairSum > tar){
//             end--;
//         }
//         else{
//             ans.push_back(st);
//             ans.push_back(end);
//             return ans;
//         }
//     }
// }


// int main(){
//     vector<int> nums={10,12,13,15};
//     int tar = 28;
//     vector<int> ans = pairSum(nums,tar);
//     cout<<ans[0]<<" "<<ans[1];
//     return 0;
// }


// //WAF to calculate Majority Element using Brute force approach.
// #include<iostream>
// #include<vector>
// using namespace std;
// int majorityElement(vector<int> nums){
//     int n = nums.size();
//     for(int val : nums){
//         int freq=0;
//         for(int el : nums){
//             if(el == val){
//                 freq++;
//             }
//         }
//         if(freq > n/2){
//             return val;
//         }
//     }
// }

// int main(){
//     vector<int> nums ={1,1,1,2,2,2,2};
//     cout<<majorityElement(nums);
//     return 0;
// }

// //WAF to calculate Majority Element using optimal approach.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int majorityElement(vector<int> nums){
//     sort(nums.begin(),nums.end());
//     int freq=1, ans=nums[0];
//     for(int i=1; i<nums.size(); i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             ans=nums[i];
//         }
//         if(freq > nums.size()/2){
//             return ans;
//         }
//     }
// }

// int main(){
//     vector<int> nums={1,1,1,2,2,2,2};
//     cout<<majorityElement(nums);
//     return 0;
// }

// //WAF to calculate Majority Element using moore's voting algorithm.
// #include<iostream>
// #include<vector>
// using namespace std;
// int mooreAlgo(vector<int> nums){
//     int freq=0,ans=0;
//     for(int i=0; i<nums.size(); i++){
//         if(freq == 0){
//             ans=nums[i];
//         }
//         if(ans == nums[i]){
//             freq++;
//         }
//         else{
//             freq--;
//         }
//     }

//     // when majority element is not given.
//     int count=0;
//     for(int val: nums){
//         if(val == ans){
//             count++;
//         }
//     }

//     if(count > nums.size()/2){
//         return ans;
//     }
//     else{
//         return -1;
//     }
// }

// int main(){
//     vector<int> nums={1,2,1,2,1,2,2};
//     cout<<mooreAlgo(nums);
//     return 0;
// }

// //WAF to compute X^N using binary form.
// #include<iostream>
// #include<vector>
// using namespace std;
// int computeXPowN(double x, long n){
//     double ans=1;
//     while(n>0){
//         if(n%2 == 1){
//             ans*=x;
//         }
//         x*=x;
//         n=n/2;
//     }
//     return ans;
// }

// int main(){
//     double x=4;
//     long n=15;
//     cout<<computeXPowN(x,n);
//     return 0;
// }

// //WAF to compute X^N using binary form to handle negative number.
// #include<iostream>
// using namespace std;
// int computeXPowN(double x, int n){
//     if(n==0) return 1.0;
//     if(x==0) return 0.0;
//     if(x==1) return 1.0;
//     if(x==-1 && n%2==0) return 1.0;
//     if(x==-1 && n%2!=0) return -1.0;

//     int binaryForm = n;
//     if(n<0){
//         x=1/x;
//         binaryForm = -binaryForm;
//     }
//     double ans=1;
//     while(binaryForm > 0){
//         if(binaryForm % 2 == 1){
//             ans*=x;
//         }
//         x*=x;
//         binaryForm/=2;
//     }
//     return ans;
    
// }

// int main(){
//     double x=3;
//     int n=5;
//     cout<<computeXPowN(x,n);
//     return 0;
// }

// //WAP to splve buy and sell problem where prices=[7,1,5,3,6,4].
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int arr[n] = {7,1,5,3,6,4};
//     int bb=arr[0];
//     int mp=0;
//     for(int i=1; i<n; i++){
//         if(arr[i]>bb){
//         mp=max(mp,arr[i]-bb);
//     }
//         bb=min(bb,arr[i]);
//     }
//     cout<<mp;
// }


// //WAF to solve container with most water problem where height = [1,8,6,2,5,4,8,3,7].use brute force.
// #include<iostream>
// #include<vector>
// using namespace std;
// int containerWithMostWater(vector<int> nums){
//     int mostWater=0;
//     for(int i=0; i<nums.size(); i++){
//         for(int j=i+1; j<nums.size(); j++){
//             int height= min(nums[i],nums[j]);
//             int width=j-i;
//             int area=height*width;
//             mostWater=max(mostWater,area);
//         }
//     }
//     return mostWater;
// }

// int main(){
//     vector<int> nums={1,8,6,2,5,4,8,3,7};
//     cout<<containerWithMostWater(nums);
//     return 0;
// }


// //WAF to solve container with most water problem where height = [1,8,6,2,5,4,8,3,7].use optimized approach.
// #include<iostream>
// #include<vector>
// using namespace std;
// int containerWithMostWater(vector<int> nums){
//     int maxWater=0;
//     int st=0;
//     int end=nums.size()-1;
//     while(st<end){
//         int height=min(nums[st],nums[end]);
//         int width = end-st;
//         int area=height*width;
//         maxWater=max(maxWater,area);
//         nums[st] < nums[end] ? st++ : end--;
//     }
//     return maxWater;
// }

// int main(){
//     vector<int> nums={1,8,6,2,5,4,8,3,7};
//     cout<<containerWithMostWater(nums);
//     return 0;
// }

// //WAF to solve product of array Expect self problem where nums=[1,2,3].use brute force approach.
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> ProductOfArrayExpectSelf(vector<int> nums){
//     vector<int> ans;
//     for(int i=0; i<nums.size(); i++){
//         int product=1;
//         for(int j=0; j<nums.size(); j++){
//             if(j!=i){
//                 product*=nums[j];
//             }
//         }
//         ans.push_back(product);
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums={1,2,3,4};
//     vector<int> ans = ProductOfArrayExpectSelf(nums);
//     for(int val : ans){
//         cout<<val<<endl;
//     }
//     return 0;
// }

// //WAF to solve product of array Expect self problem where nums=[1,2,3].use optimal approach.
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> productOfSelfExcept(vector<int> nums){
//     int n=nums.size();
//     vector<int> ans(n,1);
    
//     int prefix=1;
//     for(int i=0; i<n; i++){
//         ans[i]=prefix;
//         prefix*=nums[i];
//     }
    
//     int suffix=1;
//     for(int i=n-1; i>=0; i--){
//         ans[i]*=suffix;
//         suffix*=nums[i];
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums={1,2,3,4};
//     vector<int> ans = productOfSelfExcept(nums);
//     for(int i: ans){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// //predict output
// #include<iostream>
// using namespace  std;
// int main(){
//     int a=5;
//     int *p = &a;
//     int **q=&p;
//     cout<<*p<<endl;
//     cout<<**q<<endl;
//     cout<<p<<endl;
//     cout<<*q<<endl;
//     return 0;
// }

// //predict output
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40};
//     int *ptr = arr;
//     cout<<*(ptr + 1)<<endl;
//     cout<<*(ptr + 3)<<endl;
//     ptr++;
//     cout<<*ptr<<endl;
//     return 0;
// }

// //WAF to apply Binary search in sorted array.
// #include<iostream>
// #include<vector>
// using namespace std;
// int BinarySearch(vector<int> nums, int tar){
//     int st=0, end=nums.size()-1, mid;
//     while(st<=end){
//         mid=st+(end-st)/2;
//         if(tar > nums[mid]){
//             st=mid+1;
//         }
//         else if(tar < nums[mid]){
//             end=mid-1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums={1,2,3,4,5,6,7};
//     int tar=6;
//     cout<<"target is found at "<<BinarySearch(nums,tar);
//     return 0;
// }

// //WAF to apply Binary search in rotated array at given target.nums={3,4,5,6,7,0,1,2}.
// #include<iostream>
// #include<vector>
// using namespace std;
// int rotatedArr(vector<int> nums, int tar){
//     int st=0,end=nums.size()-1, mid;
//     while(st<=end){
//          mid=st+(end-st)/2;
//          if(nums[mid] == tar) return mid;
//          if(nums[st]<=nums[mid]){
//             if(nums[st]<=tar && tar<=nums[mid]){
//                 end=mid-1;
//             }else{
//                 st=mid+1;
//             }
//          }
//          else{
//             if(nums[mid]<=tar && tar<=nums[end]){
//                 st = mid+1;
//             }else{
//                 end=mid-1;
//             }
//          }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums={3,4,5,6,7,0,1,2};
//     int tar = 0;
//     cout<<rotatedArr(nums,tar);
//     return 0;
// }

// //WAF to find peak index in maountain array.where indx=0,n-1 != peak;
// #include<iostream>
// #include<vector>
// using namespace std;
// int peakIndexMountainArr(vector<int> nums){
//     int st = 1, end=nums.size()-2;
//     while(st<=end){
//         int mid = st+(end-st)/2;
//         if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
//             return mid;
//         }
//         if(nums[mid-1]<nums[mid]){
//             st=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums={0,3,8,9,5,2};
//     cout<<peakIndexMountainArr(nums);
//     return 0;
// }