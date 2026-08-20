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