#include<bits/stdc++.h>
using namespace std;

// //print array elements by taking input
// void PrintArr(int n, int arr[]){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     cout<<"Enter elements of arr: ";
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     PrintArr(n,arr);

//     return 0;
// }

// //find smallest number in an array
// int smallestNo(int n, int arr[]){
//     int smallest = INT_MAX;
//     for(int i=0; i<n; i++){
//         smallest = min(arr[i],smallest);
//     }
//     return smallest;
// }

// int main(){
//     int n;
//     cout<<"Enter size of an array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of an arr :";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<"ans="<<smallestNo(n,arr);
    
//     return 0;
// }

// //find largest number in an arr
// void largestNo(int n, int arr[]){
//     int largest = INT_MIN;
//     int index;
//     for(int i=0; i<n; i++){
//         if(arr[i]>largest){
//             largest = arr[i];  //largest=max(arr[i],largest);
//             index = i;
            
//         }
//     }
//     cout<<"largest Number = "<<largest<< " at index "<<index;
// }

// int main(){
//     int n;
//     cout<<"Enter size of an array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements of an arr :";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     largestNo(n,arr);
// }

// //Linear search
// int linearSearch(int n, int target, int arr[]){
//     for(int i=0; i<n; i++){
//         if(arr[i] == target){
//             return target;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n=5;
//     int arr[n]={1,5,6,9,3};
//     int target = 9;
//     int result = linearSearch(n,target,arr);
//     if(result == target){
//         cout<<result<<" exist in array";
//     }
//     else{
//         cout<<"number is not found";
//     }
//     return 0;
// }


// //reverse array
// void reverse(int n, int arr[]){
//     int st=0, end=n-1;
//     while(st<end){
//         swap(arr[st],arr[end]);
//         st++;
//         end--;
//     }
// }

// int main(){
//     int n=5;
//     int arr[n]={1,2,3,5,4};
//     reverse(n,arr);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// //WAF to calculate sum and product of all numbers in an array
// int sum(int n, int arr[]){
//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum+=arr[i];
//     }
//     return sum;
// }

// int product(int n, int arr[]){
//     int product = 1;
//     for(int i=0; i<n; i++){
//         product*=arr[i];
//     }
//     return product;
// }

// int main(){
//     int n=5;
//     int arr[n]={1,2,3,5,4};
//     cout<<"Sum = "<<sum(n,arr)<<endl;
//     cout<<"Product = "<<product(n,arr);
//     return 0;
// }


// //WAF to swap the max & min number of an array
// void minMaxSwap(int n, int arr[]){
//     int minIdx = 0;
//     int maxIdx = 0;
//     int idx;
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
//     minMaxSwap(n,arr);
//     // Print updated array
//     cout << "Array after swapping max and min:\n";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// //WAF to print all the unique valuse in an array
// void uniqueNumber(int arr[],int n){
//     for(int i=0; i<n; i++){
//         int count=0;
//         for(int j=0; j<n; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count == 1){
//             cout<<arr[i]<<" ";
//         }
//     }
// }

// int main(){
//     int n=5;
//     int arr[n]={1,2,3,1,3};
//     uniqueNumber(arr,n);
//     return 0;
// }


//WAF to print intersection of 2 arrays
void intersection(int n1, int n2, int arr1[], int arr2[]){
    for(int i=0; i<n1; i++){
        int count = 1;
        for(int j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count == 2){
            cout<<arr1[i]<<" ";
        }

    }
}

int main(){
    int n1 = 5;
    int n2 = 4;
    int arr1[n1]={1,2,6,3,4};
    int arr2[n2]={1,2,7,8};
    intersection(n1,n2,arr1,arr2);
    return 0;
}