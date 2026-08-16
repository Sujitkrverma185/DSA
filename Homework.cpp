//L-3
// //sum of all number from 1 to n which is divisible by 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int sum=0;
//     for(int i=0; i<n; i++){
//         if(i%3==0){
//             sum+=i;
//         }
//     }
//     cout<<"sum of all no = "<<sum;

//     return 0;
// }

// //print factorial of n 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     cout<<"factorial = "<<fact;
// } 


// //WAF to calculate sum & product of all numbers in an array.
// #include<iostream>
// using namespace std;

// void SumAndProductOfArr(int arr[],int size){
//     int sum=0, product=1;
//     for(int i=0; i<size; i++){
//         sum+=arr[i];
//         product*=arr[i];
//     }
//     cout<<"sum of arr: "<<sum<<endl;
//     cout<<"product of arr: "<<product<<endl;
// }

// int main(){
//     int size;
//     cout<<"Enter size of arr: ";
//     cin>>size;
//     cout<<"Enter index values: ";
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     SumAndProductOfArr(arr,size);
//     return 0;
// }
// // Enter size of arr: 5
// // Enter index values: 1 2 3 4 5
// // sum of arr: 15
// // product of arr: 120


//WAF to swap the max and min number of an array.
#include <iostream>
#include <algorithm> // for swap

using namespace std;

// // Function to swap the maximum and minimum elements
// void swapMaxMin(int arr[], int size) {
//     if (size <= 1) return;

//     int minIdx = 0;
//     int maxIdx = 0;

//     // Find the indices of the minimum and maximum elements
//     for (int i = 1; i < size; ++i) {
//         if (arr[i] < arr[minIdx]) {
//             minIdx = i;
//         }
//         if (arr[i] > arr[maxIdx]) {
//             maxIdx = i;
//         }
//     }

//     // Swap the elements
//     swap(arr[minIdx], arr[maxIdx]);
// }

// int main() {
//     int arr[] = {25, 12, 89, 4, 67, 33};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original Array: ";
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     swapMaxMin(arr, size);

//     cout << "Array after Swap: ";
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }
// Original Array: 25 12 89 4 67 33 
// Array after Swap: 25 12 4 89 67 33 

// //WAF to print all the unique values in an array.
// #include<iostream>
// using namespace std;
// void uniqueValue(int arr[], int n){
//     int unique;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 unique=arr[i];
//             }
//         }
//     }
//     cout<<unique;
// }

// int main(){
//     int size;
//     cout<<"Enter size of arr: ";
//     cin>>size;
//     cout<<"Enter index values: ";
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     uniqueValue(arr,size);
//     return 0;
// }

//WAF to print intersection of 2 array.
#include<iostream>
using namespace std;
int main(){
    int s1=4;
    int s2=4;
    int arr1[s1] = {4,3,5,6};
    int arr2[s2] = {1,2,3,4};

    for(int i=0; i<s1; i++){
        for(int j=0; j<s2; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0;
}