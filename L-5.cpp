#include<bits/stdc++.h>
using namespace std;
//Function
// //sum of two numbers
// int sum(double a, double b){
//     double sum = a+b;
//     return sum;
// }

// int main(){
//     cout<<sum(5,4);
//     return 0;
// }

// //find min of two number
// int min(int a, int b){
//     if(a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int main(){
    
//     cout<<"min= "<<min(4,5);
//     return 0;
// }

// //calculate sum of numbers from 1 to N
// int sumOfNumber(int n){
//     int sum=0;
//     for(int i=1; i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     cout<<"sum of N number = "<<sumOfNumber(n);
//     return 0;
// }


// //calculate N factorial
// int factN(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;

// }

// int main(){
//      int n;
//      cout<<"enter a number = ";
//      cin>>n;
//      cout<<"factorial = "<<factN(n);
//      return 0;
// }


// //pass by value
// int sum(int a, int b){
//     a=a+5;
//     b=b+5;
//     return a+b;
// }

// int main(){
//     int a=10;
//     int b=10;
//      cout<<sum(a,b)<<endl;

//      cout<<a<<endl;
//      cout<<b<<endl;
//      return 0;
// }


// //calculate sum of digits of number
// int sumOfDigits(int n){
//     int rem=0;
//     int sum=0;
//     while(n>0){
//         rem=n%10;
//         sum+=rem;
//         n =n/10;
//     }
//     return sum;
// }

// int main(){
//     int n; 
//     cout<<"Enter digits for sum =";
//     cin>>n;
//     cout<<"Sum of digits = "<<sumOfDigits(n);
//     return 0;
// }


// //calculate nCr binomial coefficent for n & r
// int fact(int x){
//     int fact =1;
//     for(int i=1; i<=x; i++){
//         fact*=i;
//     }
//     return fact;
// }

// int main(){
//     int n,r;
//     cout<<"Enter value of n = ";
//     cin>>n;
//     cout<<"Enter value of r = ";
//     cin>>r;
//     int s=n-r;
//     cout<<"nCr="<<((fact(n))/(fact(r)*fact(s)));
// }


// //WAF to check if a number is prime or not
// int primeNo(int n){
//     for(int i=2; i<=n-1;i++){
//         if(n%i==0){
//             return 1;
//         }
//         else{
//             return -1;
//         }
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     int val = primeNo(n);
//     if(val==1){
//         cout<<"not prime";
//     }
//     else{
//         cout<<"prime";
//     }
// }


// //WAF to print all prime number from 2 to N
// void Prime(int n){
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){
//             cout<<i<<" is not prime\n";
//         }else{
//             cout<<i<<" is prime number\n";
//         }
//     }

// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     Prime(n);
//     return 0;

// }

// //WAF to print nth fibonacci series
// void fibonacci(int n){
//     int a=0;
//     int b=1;
//     for(int i=2; i<n;i++){
//         cout<<a <<" "<<b<<" ";
//         a=a+b;
//         b=b+a;
//     }
// }

// int main(){
//     int n=6;
//     fibonacci(n);
// }

